// using command line parameters

#include <iostream>

int main(int argc, char* argv[])
{
  // argc is the number of arguments
  std::cout << "this program has these arguments" << std::endl;
  for (int i = 0; i < argc; ++i)
    // use argv[i] for the ith argument
    std::cout << argv[i] << std::endl;
}
