#include <iostream>
#include <string>
#include "VarArray.hpp"


int main(int argc, char* argv[])
{
  VarArray va;
  for (int i =0; i < 10; ++i)
           va.add_data(i);
 
  std::cout << va.get_data() << std::endl;
  VarArray copy;
  copy = va;
  std::cout << copy.get_data() << std::endl;

  VarArray copy_copy(copy);
  std::cout << copy_copy.get_data() << std::endl;

  std::cout << copy_copy << std::endl;

  copy_copy[4] = 5;
  copy_copy[5] = 4;
  
  std::cout << copy_copy << std::endl;
}  
