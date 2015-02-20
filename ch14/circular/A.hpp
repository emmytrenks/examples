#ifndef A_HPP
#define A_HPP

class B;
class A
{
 private:
  int data;
  B* b;
 public:
  A(const int&);
  void setB(B*);
  int getData() const;
  void print() const;
};

#endif
