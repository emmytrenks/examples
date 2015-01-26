// an example of a simple class with private and public members
// accessors, mutators

#include <iostream>
#include <cstdlib> // for exit

const double PI = 3.14159;

// define the class similar to a struct
// we also have access specifiers
class Circle
{
  // the members within the private section can only be accessed by object of this class
 private:
  double radius;

  // the publicly accessible members 
 public:
  
  // constructors
  // if you overload constructors they MUST have different parameter lists
  // if you use defaults, you cannot have ambiguity between constructors
  Circle(); // default constructor
  Circle(const double& r); // overloaded constructor

  // destructor
  ~Circle(); 

  // accessor
  double getRadius() const { return radius; } // inline definition
  
  // mutator setRadius
  bool setRadius(const double& r);

  // calculate the area and circumfrence
  // we calculate this so we dont get stale data
  // we use const so they cannot modify data
  double getArea() const { return radius * radius * PI; }
  double getCirc() const { return radius * 2 * PI; }
};

// definition of our class functions
// remember to use the scope resolution operator (::)

Circle::Circle()
{
  // member function have a hidden parameter   (*this)
  radius = 0;
}

Circle::Circle(const double& r) // overloaded constructor
{
  if (!setRadius(r)) // call setRadius to set the radius
    radius = 0; 
}

Circle::~Circle()
{
  // do stuff
}

bool Circle::setRadius(const double& r)
{
  if (r < 0)
    return false;
   
  radius = r;
  return true;
}


int main()
{
// use the default constructor  
  Circle c;

  // we cannot do this, radius is private
  // c.radius = 10;
  
  // use the public mutator to set the radius
  c.setRadius(10);
  
  // use the overloaded constructor
  Circle d(3);

  // this will set the radius to 0
  Circle e(-5);

  // use the accessors
  std::cout << c.getRadius() << std::endl;
  std::cout << d.getRadius() << std::endl;
  std::cout << e.getRadius() << std::endl;
}
