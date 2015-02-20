#ifndef SQUARE_HPP
#define SQUARE_HPP

#include <iostream>
#include <string>
#include "Rectangle.hpp"

/* 
   Defines the Square class
   derived from the Rectangle class
*/

// uses a public class access specifier
class Square : public Rectangle
{
 private:
  int test;

 public:
  Square() : test(3) {}

  std::string getClass() const { return "Square"; }
  
};

#endif
