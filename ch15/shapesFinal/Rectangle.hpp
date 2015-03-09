#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>
#include <sstream>
#include <math.h>
#include <iomanip>
#include "Polygon.hpp"

class Rectangle : public Polygon
{
protected:
  // using c++11 we can define this with its default here
  double length = 1, width = 1;
public:
  // constructors
  Rectangle() : Polygon(4) {}
  Rectangle(const double& len, const double& w) : Polygon(4) { set_length(len);  set_width(w); }

  // accessors and mutators
  double get_length() const { return length; } 
  virtual void set_length(const double& len);
  double get_width() const { return width; } 
  virtual void set_width(const double& w);

  // overridden functions
  std::string get_class() const;
  std::string get_info() const;
  double get_area() const;
  double get_peri() const;
};

void Rectangle::set_length(const double& len)
{
  length = len > 0 ? len : 1;
}

void Rectangle::set_width(const double& w)
{
  width = w > 0 ? w : 1;
}

std::string Rectangle::get_class() const
{
  return "Rectangle";
}

std::string Rectangle::get_info() const
{
  std::stringstream ss;
  ss << Polygon::get_info()
     << std::fixed << std::setprecision(3) 
     << "[Length: " << length << "]"
     << "[Width: " << width << "]";
  return ss.str();
}

double Rectangle::get_area() const
{
  return length * width;
}

double Rectangle::get_peri() const
{
  return 2 * length + 2 * width;
}

#endif
