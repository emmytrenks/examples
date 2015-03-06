#include <iostream>
#include <sstream>
class A;

std::ostream& operator << (std::ostream& strm, const A& a);

class A
{
public:
  int x;
  std::string show_data() const { return "tony"; }
  friend std::ostream& operator << (std::ostream& strm, const A& a);
};

std::ostream& operator << (std::ostream& strm, const A& a)
{

  strm << a.show_data();
  return strm;
}

int main()
{
}
