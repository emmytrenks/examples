#include <iostream>

class Rec
{
public:
  int z;
  Rec() { z = 10; }
};

class Square : public Rec
{
public:
  int z;
  Square() { z = 15; }
};

int main()
{
  Square s;
  std::cout << s.z << std::endl;
  // we can point to derived classes with base class pointers
  Rec *r = &s;
 
  std::cout << r->z << std::endl;

  std::cout << s.Rec::z << std::endl;
}
