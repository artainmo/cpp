#include <string>
#include <iostream>
#include <sstream>
#include <cctype>
#include <climits>
#include <cfloat>
#include <cmath>
#include <iomanip>

#define P(x) std::cout << x << std::endl;

void type_conversions_nums(double const &biggest_type) //Do the type conversions
{
 	if (biggest_type > CHAR_MAX || biggest_type < CHAR_MIN || std::isinf(biggest_type) || std::isnan(biggest_type))
		std::cout << "char : impossible" << std::endl;
	else if (!isprint(biggest_type))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(biggest_type) << std::endl; //static_cast is same as standard c casts, it only different in making code more readable and gives compilation time error instead of run-time error when necessary, but has a slight performance cost to it..
	if (biggest_type > INT_MAX || biggest_type < INT_MIN || std::isinf(biggest_type) || std::isnan(biggest_type))
		std::cout << "int : impossible" << std::endl;
	else
		std::cout <<  "int : " << static_cast<int>(biggest_type) << std::endl;
	if (!std::isinf(biggest_type) && (biggest_type > FLT_MAX || biggest_type < -FLT_MAX)) //FLT_MIN gives minimal positive value, so we use -FLT_MAX
		std::cout << "float : impossible" << std::endl;
	else
		std::cout <<  "float : " << std::fixed << std::setprecision(1) << static_cast<float>(biggest_type) << "f" << std::endl; //std::fixed combined with std::setprecsion can change the precion of fractions in cout stream
	std::cout <<  "double : " << std::fixed << std::setprecision(1) << static_cast<double>(biggest_type) << std::endl;
	//"literal must belong to one of the following a scalar types: char, int, float or double" -> so no overflow possible on double cast
}

bool scalar_test(std::string const &arg)//Verifies if it is an accepted scalar
{
	for (int i = 0; i < (int)arg.length(); i++)
		if (!std::isdigit(arg[i]) && arg[i] != '.' && !(i == 0 && (arg[i] == '-' || arg[i] == '+')))
				return (false);
	return (true);
}

bool detect_num(std::string const &arg, long double &biggest_type) //Verifies if it is an accepted scalar
{
	std::stringstream str_conv(arg);

	if (arg.compare("-inf") == 0 || arg.compare("+inf") == 0
				|| arg.compare(0, 3, "nan") == 0 || scalar_test(arg))
	{
				str_conv >> biggest_type; //From string to long double using stringstreams
        if ((biggest_type <= DBL_MAX && biggest_type >= -DBL_MAX) || arg.compare("-inf") == 0 || arg.compare("+inf") == 0 || arg.compare(0, 3, "nan") == 0) //Must not overflow a double but stil accept inf and nan
				    return (true);
	}
	return (false);
}

//Only takes in !scalar types!, thus error if not a scalar | -inff, +inff and nanf are sole accepted pseudo literals
//Scalar type must belong to int, float or double
int main(int argc, char **argv)
{
	std::string arg;
	long double	biggest_type;

	if (argc != 2)
	{
		P("Error in arguments");
		return (1);
	}
	arg = argv[1];
	if (arg[arg.length() - 1] == 'f' && !((arg.compare("-inf") == 0 || arg.compare("+inf") == 0))) //Pop back if f at end of float
		arg.pop_back();
	biggest_type = 0;
	if (detect_num(arg, biggest_type) == true) //Send error message if not an accepted input
		type_conversions_nums(biggest_type);
	else
	{
		std::cout << "arg is not an int, float or double, -inf, +inf and nan are sole accepted pseudo literals" << std::endl;
		return (1);
	}
	return (0);
}

//-2147483648.44 max negative int + 0,44
//To test with values greater than MAX double, add multiple lines of 0000s
