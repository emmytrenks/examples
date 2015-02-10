#ifndef VARARRAY_HPP
#define VARARRAY_HPP

/*
  An example variable array class for use with copy 
  constructors and overloaded operators
*/

#include <istream>
#include <sstream>
#include <string>

class VarArray;

std::ostream& operator << (std::ostream&, const VarArray&);

class VarArray
{
 private:
  int array_size;       // the number of elements
  int array_capacity;   // the available number of elements
  int* array;           // the actual array 

 public:
  VarArray();
  VarArray(const VarArray&); // constructor
  ~VarArray();                // destructor 

  void add_data(const int&);            // add data to the array
  std::string get_data() const;        // get a string of the data

  // setting a VarArray equal to another
  VarArray& operator = (const VarArray&);

  // overload the [] so we can access data at a aspecific index
  int& operator[](const int&);

  // we need to give the ostream class access to private members
  // so we use a friend function
  friend std::ostream& operator << (std::ostream&, const VarArray&);
};

// default constructor
VarArray::VarArray()
{
  // set the initial values
  // create the array with default size
  array_size = 0;
  array_capacity = 2;
  array = new int[array_capacity];
}

VarArray::VarArray(const VarArray& va) // constructor
{
  array_size = va.array_size;
  array_capacity = va.array_capacity;
  array = new int[array_capacity];
  for (int i = 0; i < array_size; ++i)
    array[i] = va.array[i];
}

VarArray::~VarArray()
{
  // delete the array
      delete [] array;
}

void VarArray::add_data(const int& d)
{
  array[array_size++] = d;
  if (array_capacity == array_size)
    {
      // double the size of the array and move everything
      int* new_array = new int[array_capacity * 2];
      for (int i =0; i < array_size; ++i)
	new_array[i] = array[i];
      array_capacity *= 2;
      delete [] array;
      array = new_array;
    }
}

std::string VarArray::get_data() const
{
  std::stringstream ss;
  for (int i =0; i < array_size; ++i)
    ss << "[" << array[i] << "]";
  return ss.str();
}

VarArray& VarArray::operator = (const VarArray& va)
{
  if (this != &va)
    {
      delete [] array;
      array_size = va.array_size;
      array_capacity = va.array_capacity;
      int* new_array = new int[array_capacity];
      for (int i = 0; i < array_size; ++i)
	new_array[i] = va.array[i];
      
      array = new_array;
    }
  return *this;
}

int& VarArray::operator[](const int& index)
{
  return array[index];
}

std::ostream& operator << (std::ostream& strm, const VarArray& va)
{
  for (int i = 0; i < va.array_size; ++i)
    {
      strm << "[" << va.array[i] << "]";
    }
  return strm;
}
#endif
