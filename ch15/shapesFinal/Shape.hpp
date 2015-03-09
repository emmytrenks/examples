#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
#include <sstream>

class Shape;

std::ostream& operator << (std::ostream& strm, const Shape& s);

class Shape
{
public:
  // every Shape will have a get_class() function
  // this is pure virtual so it must be overridden in non-abstract derived classes
  virtual std::string get_class() const = 0;

  // every Shape will have a get_info() function
  // this is const so it can be used with the ostream friend function, which calls it
  virtual std::string get_info() const;

  // every Shape will have an area function
  // this is pure virtual so it must be overridden in non-abstract derived classes
  virtual double get_area() const = 0;

  // the ostream operator << function can access this class
  friend std::ostream& operator << (std::ostream& strm, const Shape& s);
};

std::string Shape::get_info() const
{
  std::stringstream ss;
  ss << "[Class: " << get_class() << "]"
     << "[Area: " << get_area() << "]";
  return ss.str();
}

std::ostream& operator << (std::ostream& strm, const Shape& s)
{
  strm << s.get_info();
  return strm;
}
#endif
