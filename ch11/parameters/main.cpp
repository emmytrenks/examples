#include <iostream>
#include <string>

struct Thing
{
  // you can make multiple memebers using the ','
  int data, stuff;
  std::string otherStuff;
};

// pass by value
// this will create a copy and send the copy to the function
void byValue(Thing t);

// pass by reference
// this will pass a reference to the Thing and the Thing
// can be changed within the function
void byReference(Thing& t);

// pass by const reference
// this will pass a reference that cannot be changed
void byConstRef(const Thing& t);

// return a struct
// this will create a Thing locally and then return a
// copy to the calling function
Thing retThing();

int main()
{
  // create a Thing with the easier way
  // you can skip everything from a point
  Thing thing = { 12, 15, "tony" };

  // cannot do this
  // Thing thing2 = {, 15 };
  // output the data value
  std::cout << thing.data << " - " << thing.stuff 
	    << " - " << thing.otherStuff << std::endl;
 
  byValue(thing);
  std::cout << thing.data << " - " << thing.stuff 
	    << " - " << thing.otherStuff << std::endl;

  byReference(thing);
  std::cout << thing.data << " - " << thing.stuff 
	    << " - " << thing.otherStuff << std::endl;

  byConstRef(thing);
  std::cout << thing.data << " - " << thing.stuff 
	    << " - " << thing.otherStuff << std::endl;

  Thing newThing = retThing();
  std::cout << newThing.data << " - " << newThing.stuff 
	    << " - " << newThing.otherStuff << std::endl;
  
}

void byValue(Thing t)
{
  t.data = 0;
}

void byReference(Thing& t)
{
  t.data = 0;
}

void byConstRef(const Thing& t)
{
  // do nothing because we cannot change it anyway
}

Thing retThing()
{
  Thing ret = { -1, -1, "empty string" };
  return ret;
}
