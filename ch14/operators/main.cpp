#include <iostream>
#include "Thing.hpp"

int main()
{
  // make a Thing and output
  Thing t; 
  std::cout << "t.data = " << t << std::endl;

  // copy without a prefix
  Thing t2(t);
  std::cout << "t2.data = " << t2 << std::endl;

  std::cout << std::endl;
  // copy with prefix
  Thing t3(++t2);
  std::cout << "t2.data = " << t2 << std::endl;
  std::cout << "t3.data = " << t3 << std::endl;

  std::cout << std::endl;
  // copy with postfix
  Thing t4(t3++);
  std::cout << "t3.data = " << t3 << std::endl;
  std::cout << "t4.data = " << t4 << std::endl;

  // decrement
  std::cout << t4--;
  std::cout << " " << --t4 << std::endl; 

  // show == operator
  std::cout << "they are" << (++t4 == t ? " " : " not " ) 
	    << "equal" << std::endl;

  %t4 ;
  std::cout << "t4.data = " << t4 << std::endl;
}
