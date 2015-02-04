#ifndef COUNTER_HPP
#define COUNTER_HPP

/*
  This class contains a static member and a static function
  The static function can only access static members
  This is so it can be called before an instance of the class is created
*/

class Counter
{
 private:
  static int data;
 public:
  // every time the constructor is called
  // data increases by one
  Counter() { ++data; }
  ~Counter() { --data; }
  static int getData() { return data; }

};
// type, class name, scope resolution operator, member , value
int Counter::data = 0;

#endif
