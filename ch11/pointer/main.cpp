#include <iostream>
#include <string>

struct Person
{
  int data;
};

struct Student
{
  // has a pointer to a Person object
  Person* p;
};

int main()
{
  // create a Person object
  Person person = { 10 };
  
  // create a Person pointer
  Person* p = &person;
  
  // create a Student object using the Person pointer
  Student student = { p };

  // create a Student pointer
  Student* s = &student;

  // using the person object 
  std::cout << person.data << std::endl;

  // using the person pointer
  std::cout << (*p).data << std::endl;
  std::cout << p->data << std::endl;

  // using the student object
  std::cout << (*student.p).data << std::endl;
  std::cout << student.p->data << std::endl;

  // using the student pointer
  std::cout << (*(*s).p).data << std::endl;
  std::cout << s->p->data << std::endl;

}
