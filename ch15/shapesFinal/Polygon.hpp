#ifndef POLYGON_HPP
#define POLYGON_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include "Shape.hpp"

class Polygon : public Shape
{
private:
  int sides;
  void set_sides(const int&);

public:
  Polygon(const int& i) { set_sides(i); }
  // get_area() is inherited from Shape
  // it is still pure virtual since we do not define it here
  
  // accessor for number of sides
  int get_sides() const { return sides; }

  // Polygon Shapes will have a get_peri() function to override
  virtual double get_peri() const = 0;
  std::string get_info() const;
};

void Polygon::set_sides(const int& i)
{
  sides = i;
}

std::string Polygon::get_info() const
{
  std::stringstream ss;
  ss << Shape::get_info()
     << "[Sides: " << sides << "]"
     << std::fixed << std::setprecision(5)
     << "[Peri: " << get_peri() << "]";
  return ss.str();
}

#endif
