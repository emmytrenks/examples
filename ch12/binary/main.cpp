#include <iostream>
#include <fstream>

// create a stucture for storage
// cannot use pointers
// strings implicitly use pointers so they cannot be used

int main()
{

  // create an integer and give it a value
  // output the value
  int x = 10;
  std::cout << x << std::endl;

  // open a file for binary writing
  std::fstream oFile;
  oFile.open("binary.dat", std::ios::out | std::ios::binary);
  // write the value to the binary file
  // remember to reinterpret_cast to char*
  // also remember to close the file
  if (oFile)
    {
      // the object and its size
      oFile.write(reinterpret_cast<char*>(&x), sizeof(x));
    }

  // alter the integer value
  // output the value


  // open a file for binary reading
  // read the binary value into the integer

  // output the value


  // create an instance of our structure

  // open and write a binary file for our struct

  // create a new BinaryData object

  // open and read a binary file for our struct

  // output the contents of our read values
}
