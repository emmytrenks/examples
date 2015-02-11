#include <iostream>
#include "Rational.hpp"

int main()
{
  Rational one;
  Rational two(2);
  Rational twotoo(4, 2);
  Rational normal(5, 15);
  Rational copy(twotoo);

  std::cout << one << "\n"
	    << two << "\n"
	    << twotoo << "\n"
	    << normal << "\n"
	    << copy << std::endl;

  std::cout << "\ntesting overloaded addition\n"
	    << two + two << std::endl;

}
