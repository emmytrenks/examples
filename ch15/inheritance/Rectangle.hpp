#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

/*
  This class defines a Rectangle
  It will be used as a base class for Square
 */

#include <string>
#include <iostream>

class Rectangle;

std::ostream& operator << (std::ostream& strm, const Rectangle& r);

class Rectangle
{
 private:
  double length, width;
 public:
  Rectangle() : length(1), width(2) {}
  Rectangle(const double&, const double&);

  void setLength(const double&);
  void setWidth(const double&);

  double getLength() const { return length; }
  double getWidth() const { return width; }

  double getArea() const { return length * width; }
  double getPerimeter() const { return 2 * length + 2 * width; } 

  virtual std::string getClass() const { return "Rectangle"; } 

  friend std::ostream& operator << (std::ostream& strm, const Rectangle& r);
};

Rectangle::Rectangle(const double& l, const double& w)
{
  length = (l >= 0 ? l : 0);
  width = (w >= 0 ? w : 0);
}

void Rectangle::setLength(const double& l)
{
  length = (l >= 0 ? l : 0);
}
void Rectangle::setWidth(const double& w)
{
  width = (w >= 0 ? w : 0);
}

std::ostream& operator << (std::ostream& strm, const Rectangle& r)
{
  strm << "Class: " << r.getClass()
       << ", Length: " << r.length
       << ", Width: " << r.width
       << ", Area: " << r.getArea()
       << ", Perimeter: " << r.getPerimeter();
  return strm;
}

#endif 
