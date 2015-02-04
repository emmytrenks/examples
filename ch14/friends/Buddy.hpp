#ifndef BUDDY_HPP
#define BUDDY_HPP

// use forward declaration for the Buddy
// we cannot use parts of the class but we can tell the compiler we will 
// be having a class named this that will be defined later
//class Pal;

class Buddy
{
  int data;
  
 public:
  Buddy() : data(5) {}
  friend class Pal;
};

#endif
