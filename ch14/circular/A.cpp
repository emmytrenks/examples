#include <iostream>
#include "A.hpp"
#include "B.hpp"

A::A(const int& d)
  : data(d)
{}

void A::setB(B* b)
{
  this->b = b;
}

int A::getData() const
{
  return data;
}

void A::print() const
{
  std::cout << "data: " << data
	    << " B data: " << b->getData() << std::endl;
}
