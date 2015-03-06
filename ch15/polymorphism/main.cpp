#include <iostream>

class A 
{
public:
  int data;
  A() : data(10) {}
  // this can be redefined in derived classes, but not overridden
  void foo() { std::cout << "A foo() has been called out." << std::endl; }

  // this can be overridden in derived classes
  virtual void bar() { std::cout << "A bar() has been called out." << std::endl; }
  void output() { std::cout << myClass() << std::endl; }
  virtual std::string myClass() { return "A"; }

};

class B : public A
{
public:
  int data;
  B() : data(100) {}
  void foo() { std::cout << "B foo() has been called out." << std::endl; }
  virtual void bar() { std::cout << "B bar() has been called out." << std::endl; }
  virtual std::string myClass() { return "B"; }
};

class C : public B
{
public:
  virtual std::string myClass() { return "C"; }
};

int main()
{
  A a1; 
  a1.foo();
  a1.bar();
  A* a2 = &a1;
  a2->foo();
  a2->bar();

  B b1;
  b1.foo();
  b1.bar();
  a2 = &b1;
  a2->foo(); // this calls the A version, it is statically bound  
  a2->bar(); // this calls the B version that is dynamically bound

  a1 = b1;
  a1.foo(); // this calls the A
  a1.bar(); // this calls the A BECAUSE polymorphism only works for pointers
            // and references

  A* aPtr1 = new A();
  A* aPtr2 = new B();
  A* aPtr3 = new C();
  B* bPtr1 = new C();

  aPtr1->output();
  aPtr2->output();
  aPtr3->output();
  bPtr1->output();
}
