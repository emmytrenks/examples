#include <iostream>
#include "Rectangle.hpp"
#include "Square.hpp"

int main()
{
  // create a Rectangle
  Rectangle r(2, 3);
  // call the Rectangle stream operator
  std::cout << r << std::endl; 

    Square s;
  // because Square in herits the stream operator, it gets called from the base class
  // when the base class calls operator<< it calls the base class getClass() function
    std::cout << s <<std::endl; 

  Square s2(5, GREEN);
  std::cout << s2 <<std::endl; 

    Rectangle* rPtr = &s2;
  std::cout << *rPtr <<std::endl; 

  Rectangle r2 = s2;
  std::cout << r2 <<std::endl; 
}
