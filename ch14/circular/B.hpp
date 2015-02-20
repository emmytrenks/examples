#ifndef B_HPP
#define B_HPP

class A;
class B
{
 private:
  int data;
  A* a;
 public:
  B(const int&);
  void setA(A*);
  int getData() const;
  void print() const;
};

#endif
