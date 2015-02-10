#ifndef THING_HPP
#define THING_HPP

#include <iostream>

// forward declaration
class Thing;

// ostream prototype
std::ostream& operator<< (std::ostream& strm, const Thing&);

class Thing
{
private:
  int data;
public:
  Thing();
  Thing(const Thing&);

  // preincrement
  Thing& operator++();
  // post increment
  Thing operator++(int);
 
  Thing& operator--();
  Thing operator--(int);

  Thing& operator%();

  bool operator==(const Thing&);
  
  friend std::ostream& operator<< (std::ostream& strm, const Thing&);
};

Thing::Thing()
  : data(42) {}

Thing::Thing(const Thing& th)
{
  data = th.data;
}

Thing& Thing::operator++()
{
  ++data;
  return *this;
}

Thing& Thing::operator--()
{
  --data;
  return *this;
}

Thing Thing::operator--(int)
{
  Thing temp = *this;
  --data;
  return temp;
}

Thing Thing::operator++(int)
{
  Thing temp = *this;
  ++data;
  return temp;
}

bool Thing::operator==(const Thing& y)
{
  return data == y.data;
}

Thing& Thing::operator%()
{
  data += 3;
  return *this;
}

std::ostream& operator<< (std::ostream& strm, const Thing& th)
{
  strm << th.data;
  return strm;
}

#endif
