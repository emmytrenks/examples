#include <iostream>
#include "Rational.hpp"
#include "Mixed.hpp"

int main()
{
  Rational r(15, 3);
  std::cout << r << std::endl;

  Rational r2(14, 3);
  r += r2;

  std::cout << r << std::endl;

  Rational r3(58, 6);

  std::cout << ( r3 == r ? "They are equal" : "You fail." )
	    << std::endl;

  Mixed m;
  std::cout << m << std::endl;
  
  Mixed m2(3);
  std::cout << m2 << std::endl;

  Mixed m3(r3);
  std::cout << m3 << std::endl;

  Mixed m4(4, r3);
  std::cout << m4 << std::endl;

  Mixed m5(3, r3);
  std::cout << (m5 < m4) << std::endl;
  std::cout << (m4 < m5) << std::endl;
}
