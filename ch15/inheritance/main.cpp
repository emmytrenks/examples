#include <iostream>
#include "Rectangle.hpp"
#include "Square.hpp"

int main()
{
  // create a Rectangle
  Rectangle r(2, 3);
  std::cout << r <<std::endl; 

  Square s;
  std::cout << s.getClass() << std::endl;
  std::cout << s <<std::endl; 
}
