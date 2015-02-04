#include <iostream>
#include "Buddy.hpp"
#include "Pal.hpp"

int main()
{
  Buddy b;
  Pal p(b);
  std::cout << p.diddy << std::endl;
}
