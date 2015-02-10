#ifndef THING_HPP
#define THING_HPP

#include <iostream>

class Thing;

std::ostream& operator << (std::ostream& strm, const Thing& th);

class Thing
{
private:
  int data;
public:
  Thing();
  Thing(const Thing&);

  Thing& operator++();
  Thing operator++(int);
  bool operator==(const Thing& th) { return data == th.data; }
    
  friend std::ostream& operator << (std::ostream& strm, const Thing& th);
};

Thing::Thing()
  : data(1) {}

Thing::Thing(const Thing& th)
{
  data = th.data;
}

Thing& Thing::operator++()
{
  ++data;
  return *this;
}

Thing Thing::operator++(int)
{
  Thing temp = *this;
  ++data;
  return temp;
}

std::ostream& operator << (std::ostream& strm, const Thing& th)
{
  strm << th.data;
  return strm;
}

#endif
