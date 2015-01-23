#include <iostream>

static union whatever
{
  
}

int main()
{
  // define a union
  union MyUnion
  {
    short x;
    int y;
  };

  
  // create a union instance
  MyUnion useless;
  
  // set the smaller value
  useless.x = 10;

  std::cout << "x = " << useless.x
	    << " y = " << useless.y
	    << std::endl;

  // set the larger value
  useless.y = 123456789;

  // set the smaller value
  std::cout << "x = " << useless.x
	    << " y = " << useless.y
	    << std::endl;

  // set the smaller value again
  useless.x = 10;
  std::cout << "x = " << useless.x
	    << " y = " << useless.y
	    << std::endl;

  // create an anonymous union

  
  union
  {
    short a;
    int b;
  };
  

  // create a union instance
  // cant really do this
  
  // set the smaller value
  a = 10;

  // set the larger value
  b = 123456789;

  // set the smaller value
  a = 10;
  std::cout << "x = " << a
	    << " y = " << b
	    << std::endl;

 
}
