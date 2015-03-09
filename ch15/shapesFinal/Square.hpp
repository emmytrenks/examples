#ifndef SQUARE_HPP
#define SQUARE_HPP

#include <iostream>
#include <sstream>
#include <math.h>
#include <iomanip>
#include "Rectangle.hpp"

class Square : public Rectangle
{
private:
protected:
  // we dont need length or width, they are handle by Rectangle
public:
  // constructors
  Square() : Rectangle(1, 1) {}
  Square(const double& side_length) : Rectangle(side_length, side_length) {}

  // overridden functions
  void set_length(const double&); 
  void set_width(const double&);
  std::string get_class() const;
  std::string get_info() const;
};

void Square::set_length(const double& len)
{
  length = len > 0 ? len : 1;
  width = length;
}

void Square::set_width(const double& w)
{
  width = w > 0 ? w : 1;
  length = width;
}

std::string Square::get_class() const
{
  return "Square";
}

std::string Square::get_info() const
{
  std::stringstream ss;
  ss << Polygon::get_info()
     << std::fixed << std::setprecision(3) 
     << "[Side Length: " << length << "]";
  return ss.str();
}

#endif
