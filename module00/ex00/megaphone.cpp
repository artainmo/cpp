#include <iostream> //io refers to input output, this is a lib for input output streams tied to the c streams
#include <string> //Allows us to use string objects
#include <stdio.h>
#include <cctype>

int main(int argc, char **argv)
{
    std::string ret;
    int i;
    int l;

    if (argc == 1)
      ret = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
      for (l = 1; argv[l] != 0; l++)
      {
        for (i = 0; argv[l][i] != 0;i++)
          argv[l][i] = toupper(argv[l][i]);
      }
      for (l = 1;argv[l] != 0; l++)
        ret += argv[l];
    }
    std::cout << ret << std::endl;
    return 0;
}
//Main function automatically returns 0
//std is a namespace, abbreviation of standard. A namespace is a declarative region, used to organize code
//:: is called the Scope Resolution Operator. It makes it clear to which namespace or class a symbol belongs.
//std::cout is an object referring to the standard output stream, c means character
// << is the insert operator
// std::endl Inserts a newline character into the output sequence and flushes it
