#ifndef RATIONAL_HPP
#define RATIONAL_HPP

/*
  a class to represent rational numbers

  constructors
    default, overloaded, copy

  overloaded operators:
    + - ++ -- * / += -= = == <<
 */

#include <iostream>

// for overloading the stream operator
// forward declaration
class Mixed;
class Rational;

// function prototype so the class knows how to make it its friend
std::ostream& operator << (std::ostream& strm, const Rational& r);

class Rational
{
 private:
  int num, den; // this will represent (num / den)

  // make sure we are using the gcd 
  void reduce();

  int gcd(const int& a, const int& b) const;
 public:
  // default constructor
  // inline
  // initializer list
  Rational() : num(0), den(1) {}

  // overloaded constructor
  // taking 1 parameter and using it for the num
  // inline, not defined later
  Rational(const int& n) { num = n; den = 1; } 

  // another overloaded constructor
  // not inline
  // define later
  // takes two arguments, num and den
  Rational(const int&, const int&);

  // copy constructor
  // takes another Rational as an argument to copy
  // sets all members equal to those in the argument
  Rational(const Rational&);

  // accessor
  // we use const at the end so we make sure we dont change the object
  int getNum() const { return num; }
  int getDen() const { return den; }

  // operator overloading section
  Rational operator+(const Rational&);
  Rational& operator+=(const Rational&);
  bool operator==(const Rational&);
  bool operator<(const Rational&);

  // gives access to the private members via 'friend'
  friend std::ostream& operator << (std::ostream& strm, const Rational& r);
  friend std::ostream& operator << (std::ostream& strm, const Mixed& m);
  friend class Mixed;
};

Rational::Rational(const int& n, const int& d)
{
  num = n;
  den = d;
  // reduce to simplify
  reduce();
}

Rational Rational::operator+(const Rational& r)
{
  Rational temp;
  temp.num = (num * r.den) + (r.num * den);
  temp.den = den * r.den;
  temp.reduce();
  return temp;
}

Rational& Rational::operator+=(const Rational& r)
{
  num = (num * r.den) + (r.num * den);
  den = den * r.den;
  reduce();
  return *this;
}

bool Rational::operator==(const Rational& r)
{
  Rational temp(r);
  temp.reduce();

  reduce();
  return num == temp.num && den == temp.den;
}

bool Rational::operator<(const Rational& r)
{
  return (num * r.den) < (r.num * den);
}

void Rational::reduce()
{
  int my_gcd = gcd(num, den);
  num /= my_gcd;
  den /= my_gcd;
}

Rational::Rational(const Rational& r)
{
  num = r.num;
  den = r.den;
  reduce();
}

// this uses recursion, dont worry about it, it will not be on the midterm
// it is just here so we can use it 
int Rational::gcd(const int& a, const int& b) const
{
  if (a == 0) return b;
  return gcd (b % a, a);
}

std::ostream& operator << (std::ostream& strm, const Rational& r)
{
  // 3/4
  strm << r.num << "/" << r.den;
  return strm;
}

#endif
