#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

/*
  The class definition for a Rectangle

  has a default constructor using an initializer list
  has an overloaded constructor
  has hidden data
  has a function to return a string of data for output
 */

#include <sstream>
#include <iomanip>
#include <string>

class Rectangle
{
 private:
  double length, width;

 public:
  Rectangle(); // default constructor
  Rectangle(const double&, const double&);

  // mutators
  bool setLength(const double&);
  bool setWidth(const double&);
  
  // accessors
  double getLength() const { return length; }
  double getWidth() const { return width; }

  double getArea() const { return length * width; }
  double getPerimeter() const { return 2 * length + 2 * width; }

  // output
  std::string getOutput() const;
};

// default constructor
// uses initializer list
Rectangle::Rectangle()
  : length(10), width(20) {}

Rectangle::Rectangle(const double& length, const double& width)
{
  // set the length
  if (length < 0)
    this->length = 10;
  else
    this->length = length; // yay

  // set the width
  if (width < 0)
    this->width = 20;
  else
    this->width = width;
}

bool Rectangle::setLength(const double& l)
{
  length = ((l < 0) ? 10 : l);
}

bool Rectangle::setWidth(const double& w)
{
  width = ((w < 0) ? 20 : w);
}

std::string Rectangle::getOutput() const
{
  std::stringstream ret;  

  ret << std::setprecision(4) << std::fixed
      << "L = " << length
      << ",W = " << width
      << ",A = " << getArea()
      << ",P = " << getPerimeter()
      << std::endl;

  return ret.str();
}

#endif

