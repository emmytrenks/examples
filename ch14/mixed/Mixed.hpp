#ifndef MIXED_HPP
#define MIXED_HPP

/*
  A class that represent mixed fractions
  has a whole number and Rational representation
  operator overloading
 */

#include <iostream>
#include "Rational.hpp"

// forward declaration
class Mixed;

// function prototype
std::ostream& operator << (std::ostream& strm, const Mixed& m);

class Mixed
{
 private:
  // we need a whole number
  int whole;
  // we need a Rational
  Rational rat; 

  // to improper
  // reduce
  void reduce();
 public:
  // constructors
  // default
  Mixed();
  // with an integer
  Mixed(const int&);
  // with a rational
  Mixed(const Rational&);
  // with both parts
  Mixed(const int&, const Rational&);

  // overloaded operators
  Mixed& operator+=(const Mixed&);
  Mixed operator+(const Mixed&);
  Mixed& operator==(const Mixed&);
  Mixed& operator++(); // pre-increment
  Mixed operator++(int); // post-increment
  
  bool operator<(const Mixed&);

  // friend functions
  friend std::ostream& operator << (std::ostream& strm, const Mixed& m);
};

Mixed::Mixed()
{
  whole = 0;
  // Rational r;
  // rat = r;
  reduce();
}

Mixed::Mixed(const int& i)
{
  whole = i;
  Rational r;
  rat = r;
  reduce();
}

Mixed::Mixed(const Rational& r)
{
  whole = 0;
  rat = r;
  reduce();
}

Mixed::Mixed(const int& i, const Rational& r)
{
  whole = i;
  rat = r;
  reduce();
}

void Mixed::reduce()
{
  if (rat.num >= rat.den)
    {
      whole += rat.num / rat.den;
      rat.num = rat.num % rat.den;
    }
}

bool Mixed::operator<(const Mixed& m)
{
  Rational a((whole * rat.den) + rat.num, rat.den);
  Rational b((m.whole * m.rat.den) + m.rat.num, m.rat.den);
  return a < b;
}

std::ostream& operator << (std::ostream& strm, const Mixed& m)
{
  strm << m.whole << " "
       << m.rat;
}

#endif
