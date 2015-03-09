#include <iostream>
#include <iomanip>
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp" 

int main()
{
  Circle c;
  std::cout << c << std::endl;

  Rectangle r;
  std::cout << r << std::endl;

  Square s;
  std::cout << s << std::endl;

  std::cout << "\n Derived Pointer Examples\n";

  Circle* cPtr = &c;
  cPtr->set_radius(10.5);
  std::cout << *cPtr << std::endl;

  Rectangle* rPtr = &r;
  rPtr->set_width(4.5);
  std::cout << *rPtr << std::endl;

  Square* sPtr = &s;
  sPtr->set_width(4.5);
  std::cout << *sPtr << std::endl;

  std::cout << "\n Base Pointer Examples\n";

  Shape* shPtr = &c;
  std::cout << *shPtr << std::endl;

  shPtr = &r;
  std::cout << *shPtr << std::endl;

  shPtr = &s;
  std::cout << *shPtr << std::endl;
}
