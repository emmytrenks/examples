#include <iostream>
#include "Thing.hpp"

int main()
{
  Thing t;
  t.data = 10;

  Thing t2;
  t2 = t;

  std::cout << t2.data << std::endl;
 
  std::cout << t2[3] << std::endl;
}
