/*
  final, override (c++11)
  pure virtual
  abstract classes
*/

// this is an abstract class
// any class with a pure virtual function is an abstract class
// it cannot be instantialized, and all pure virtual functions
// MUST be overridden in derived classes
class Ac
{
public:
  virtual void test_function() {};
  virtual void pure_virtual() = 0;
  virtual void blah() {};
};

// this is derived from an abstract class
// we MUST override all pure virtual functions 
class Dfac : public Ac
{
public:
  void test_function() override {}
  void pure_virtual() {}
  void blah() final {}
};

int main()
{
  Dfac test;
}
