#include <iostream>
#include <fstream>
#include <string>

// create a stucture for storage
// cannot use pointers
// strings implicitly use pointers so they cannot be used
struct Storage
{
  int data;
  double moreData;
  int otherData;
  // dont do this
  // std::string oops;
};

int main()
{

  // create an integer and give it a value
  // output the value
  int x = 98;
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
      oFile.close(); // close the file
    }

  // alter the integer value
  // output the value
  x = 10;
  std::cout << x << std::endl;

  // open a file for binary reading
  // read the binary value into the integer
  std::fstream iFile;
  iFile.open("binary.dat", std::ios::binary | std::ios::in);
  if (iFile)
    {
      iFile.read(reinterpret_cast<char*>(&x), sizeof(x));
      iFile.close();
    }

  // output the value
  std::cout << x << std::endl;

  // create an instance of our structure
  Storage s = { 3, 3.3, 5 }; 
  
  // open and write a binary file for our struct
  oFile.open("binary_storage.dat", std::ios::out | std::ios::binary);
  // write the value to the binary file
  // remember to reinterpret_cast to char*
  // also remember to close the file
  if (oFile)
    {
      // the object and its size
      oFile.write(reinterpret_cast<char*>(&s), sizeof(s));
      oFile.close(); // close the file
    }

  // create a new BinaryData object
  Storage fromFile;

  // open and read a binary file for our struct
  iFile.open("binary_storage.dat", std::ios::binary | std::ios::in);
  if (iFile)
    {
      iFile.read(reinterpret_cast<char*>(&fromFile), sizeof(fromFile));
      iFile.close();
    }

  // output the contents of our read values
  std::cout << "data = " << fromFile.data
	    << " moreData = " << fromFile.moreData
	    << " otherData = " << fromFile.otherData
    // << " oops = " << fromFile.oops 
	    << std::endl;
}
