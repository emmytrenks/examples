#ifndef SQUARE_HPP
#define SQUARE_HPP

#include <iostream>
#include <string>
#include "Rectangle.hpp"

/* 
   Defines the Square class
   derived from the Rectangle class
*/

enum Color { RED, BLUE, GREEN, YELLOW };

class Square;
std::ostream& operator<<(std::ostream& strm, const Square& s);

// uses a public class access specifier
class Square : public Rectangle
{
 private:
 Color color;

 public:
  // this will call the Rectangle default constructor first
  // but the default Rectangle constructor does not make the sides equal
  //Square() : color(GREEN) {}

  Square() : Rectangle(1, 1), color(GREEN) {}
  
// this calls an overloaded Rectangle constructor
  Square(const double& s, const Color& c)
    : Rectangle(s, s), color(c) {}

  Color getColor() const { return color; }
  std::string getClass() const { return "Square"; }

  friend std::ostream& operator<<(std::ostream& strm, const Square& s);
};

std::ostream& operator<<(std::ostream& strm, const Square& s)
{
  strm << "Class: " << s.getClass()
       << ", Side: " << s.getWidth()
       << ", Area: " << s.getArea()
       << ", Perimeter: " << s.getPerimeter()
       << ", Color: " << s.getColor();
  return strm;
}

#endif
