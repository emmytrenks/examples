#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <iostream>
#include <sstream>
#include <math.h>
#include <iomanip>
#include "Curved.hpp"

class Circle : public Curved
{
protected:
  // using c++11 we can define this with its default here
  double radius = 1;
public:
  // constructors
  Circle() {}
  Circle(const double& r) { set_radius(r); }

  // accessors and mutators
  double get_radius() const { return radius; } 
  void set_radius(const double& r);

  // overridden functions
  std::string get_class() const;
  std::string get_info() const;
  double get_area() const;
  double get_circ() const;
};

void Circle::set_radius(const double& r)
{
  radius = r > 0 ? r : 1;
}

std::string Circle::get_class() const
{
  return "Circle";
}

std::string Circle::get_info() const
{
  std::stringstream ss;
  ss << Curved::get_info()
     << std::fixed << std::setprecision(3) << "[Radius: " << radius << "]";
  return ss.str();
}

double Circle::get_area() const
{
  return M_PI * radius * radius;
}

double Circle::get_circ() const
{
  return 2 * M_PI * radius;
}

#endif
