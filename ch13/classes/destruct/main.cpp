#include <iostream>
#include "Square.hpp"

int main()
{
  // default contructor
  Square s;

  // overloaded constructor
  Square s2(2);
  
  // print sides
  std::cout << s.getSide() << std::endl;
  std::cout << s2.getSide() << std::endl;

  // set the side
  s.setSide(3);

  // print value
  std::cout << s.getSide() << std::endl;

  // create with pointer
  Square* s3 = new Square(4);

  // print value
  std::cout << s3->getSide() << std::endl;
  
  int* sPtr = s3->getPtr();
  std::cout << *sPtr << std::endl;
  // delete the object
  delete s3;
  std::cout << *sPtr << std::endl;
}
