#include "A.hpp"
#include "B.hpp"

int main()
{
  A a(1);
  B b(2);
  a.setB(&b);
  b.setA(&a);

  a.print();
  b.print();
}
