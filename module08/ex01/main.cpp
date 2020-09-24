#include "span.hpp"

int main()
{
  Span sp = Span(5);
  Span sp1 = Span(3);
  Span sp2 = Span(1000);

  std::cout << "~~~Test all functions~~~" << std::endl;
  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  std::cout << "~~~Test exceptions~~~" << std::endl;
  sp1.addNumber(3);
  std::cout << sp1.shortestSpan() << std::endl;
  std::cout << sp1.longestSpan() << std::endl;
  sp1.addNumber(3);
  sp1.addNumber(3);
  sp1.addNumber(3);

  std::cout << "~~~Test high numbers~~~" << std::endl;
  sp2.addRange(0, 1000);
  std::cout << sp2.shortestSpan() << std::endl;
  std::cout << sp2.longestSpan() << std::endl;
}
