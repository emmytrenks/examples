#include <iostream>
#include "B.hpp"
#include "A.hpp"

B::B(const int& d)
  : data(d)
{}

void B::setA(A* a)
{
  this->a = a;
}

int B::getData() const
{
  return data;
}

void B::print() const
{
  std::cout << "data: " << data
	    << " A data: " << a->getData() << std::endl;
}
