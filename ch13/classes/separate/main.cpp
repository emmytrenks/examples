#include <iostream>
#include <cstdlib>
#include "Rectangle.hpp"

int main(int argc, char* argv[])
{
  double l = 1, w = 1;
  if (argc == 3)
    {
      l = atof(argv[1]);
      w = atof(argv[2]);
    }
    
  // create a single Rectangle instance using the default constructor
  Rectangle one;
  std::cout << one.getOutput() << std::endl;

  // create a single Rectangle instance using the overloaded constructor
  Rectangle two(l, w);
  std::cout << two.getOutput() << std::endl;

  // create a single Rectangle instance using a pointer
  Rectangle* three = new Rectangle();
  std::cout << three->getOutput() << std::endl;

  // create a single Rectangle instance using a pointer
  Rectangle* four = new Rectangle(1.2, 3.4);
  std::cout << four->getOutput() << std::endl;

  // create an array of Rectangles using the default contructor
  Rectangle array[3];
  for (int i = 0; i < 3; ++i)
    std::cout << array[i].getOutput();
  std::cout << std::endl;
  
  // create an array of Rectangles using an initializer list
  Rectangle arrayTwo[3] = {
    Rectangle(), Rectangle(5, 5), Rectangle( 23, 45.5)
  };

  for (int i = 0; i < 3; ++i)
    std::cout << arrayTwo[i].getOutput();
  std::cout << std::endl;
}
