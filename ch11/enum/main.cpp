#include <iostream>

// create an enum (enumeration)
enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
// cannot do this
//enum OtherDay { TUESDAY };

// create an anonymous enum
enum { YESTERDAY, TODAY, TOMORROW };

// create an enum with non consecutive values
enum Grades { F = 60, D = 70, C = 80, B = 90, A = 100 };
enum OtherThing { OTHER = 10, AFTEROTHER, AFTERAFTEROTHER = 3 };


int main()
{

  // create an object using that enum
  Day x;
  x = WEDNESDAY;
  std::cout << x << std::endl;

  // enum comparison to int
  std::cout << (WEDNESDAY == 2 ? "true" : "False") << std::endl;

  // setting an enum to an int!
  x = static_cast<Day>(2);

  // loops with enums
  for (Day y = MONDAY; y <= SUNDAY; y = static_cast<Day>(y + 1))
    {
      if (y == THURSDAY)
	{
	  // do something
	}
    }

  // anonymous enum usage
  int anon = TODAY;
  std::cout << anon << std::endl;
}
