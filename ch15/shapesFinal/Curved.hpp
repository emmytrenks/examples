#ifndef CURVED_HPP
#define CURVED_HPP

class Curved : public Shape
{
public:
  virtual double get_circ() const = 0;
};

#endif
