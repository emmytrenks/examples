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
  Circle() { radius = 0; }; // inline function
  Circle(const double& r);

  // accessor
  double getRadius() const;
  
  // mutator setRadius
  void setRadius(const double& r);

  // calculate the area and circumfrence
  // we calculate this so we dont get stale data
  // we use const so they cannot modify data
  double getArea() const { return PI * radius * radius; }
  double getCircumference() const { return 2 * PI * radius; }
};

// definition of our class functions
// remember to use the scope resolution operator (::)

Circle::Circle(const double& r)
{
  setRadius(r);
}

double Circle::getRadius() const
{
  return radius;
}

void Circle::setRadius(const double& r)
{
  if (r < 0)
    {
      std::cout << "You must have a non-negative radius." << std::endl;
      std::exit(1); // kill the program
    }
  radius = r;  
}

int main()
{
  // use the default constructor
  Circle c;

  // use the overloaded constructor
  Circle d(2);

  // this will cause the program to terminate
   Circle e(-3);

  // use the accessors
  std::cout << c.getArea() << " " << d.getArea() << std::endl;
}
