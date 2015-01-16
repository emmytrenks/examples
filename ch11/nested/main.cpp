#include <iostream>
#include <string>

struct Person
{
  // we can declare multiple variables of the same type by separating them with a ','
  int age, IQ;
  std::string name;
};

struct Student
{
  int ID;
  Person weirdName;
  int gradeLevel;
};

int main()
{
  // create a Person object
  Person p = { 30, 140, "Jon" };

  // create a Student object using that Person
  Student s = { 123, p, 15 };

  // create both at the same time
  Student s2 = { 234, 35, 35, "tim", 16 };

  // access the data
  
  // print out person p name
  std::cout << p.name << std::endl;

  // print out student s -> weirdName
  std::cout << s.weirdName.name << std::endl; 

  // print out student s2 -> weirdName
  std::cout << s2.weirdName.name << std::endl; 
}



