#ifndef CURVED_HPP
#define CURVED_HPP

#include <iostream>
#include <sstream>
#include "Shape.hpp"

class Curved : public Shape
{
public:
  // get_area() is inherited from Shape
  // it is still pure virtual since we do not define it here

  // Curved Shapes will have a get_circ() function to override
  virtual double get_circ() const = 0;
  std::string get_info() const;
};

std::string Curved::get_info() const
{
  std::stringstream ss;
  ss << Shape::get_info()
     << "[Circ: " << get_circ() << "]";
  return ss.str();
}

#endif
