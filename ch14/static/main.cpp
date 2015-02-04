#include <iostream>
#include "Counter.hpp"

int main()
{
  // create one and display the number of instances using
  // with a non static function
  Counter c;
  std::cout << "The number of Counter instances is " 
	    << Counter::getData() << std::endl; 

  {
  // create an array and display
  Counter counterArray[5];
  // create another single and display
  
  std::cout << "The number of Counter instances is " 
	    << Counter::getData() << std::endl; 
  }
  std::cout << "The number of Counter instances is " 
	    << Counter::getData() << std::endl; 
  // create within a block

  // display after block
}
