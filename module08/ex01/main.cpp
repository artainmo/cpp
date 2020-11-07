#include "span.hpp"

int main()
{
  Span sp = Span(5);
  Span sp1 = Span(3);
  Span sp2 = Span(3000);

  std::cout << "~~~Test all functions~~~" << std::endl;
  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
  std::cout <<  "Longest span: " << sp.longestSpan() << std::endl;

  std::cout << "~~~Test exceptions~~~" << std::endl;
  sp1.addNumber(1);
  std::cout <<  "Shortest span: " << sp1.shortestSpan() << std::endl;
  std::cout <<  "Longest span: " << sp1.longestSpan() << std::endl;
  sp1.addNumber(2);
  sp1.addNumber(3);
  sp1.addNumber(4);
  std::cout << "Longest span: " << sp1.longestSpan() << std::endl; //The 4th numer has not been added

  std::cout << "~~~Test high numbers~~~" << std::endl;
  sp2.addRange(0, 3000);
  std::cout <<  "Shortest span: " << sp2.shortestSpan() << std::endl;
  std::cout <<  "Longest span: " << sp2.longestSpan() << std::endl;
}
