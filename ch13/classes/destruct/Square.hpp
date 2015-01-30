#ifndef SQUARE_HPP
#define SQUARE_HPP

class Square
{
 private:
  int* side; 
 
 public:
  Square();
  Square(const int&);
  ~Square();

  // accessor
  int getSide() const;
  int* getPtr() const;

  // mutator
  void setSide(const int& s);
};

Square::Square()
{
  side = new int(1);
}
Square::Square(const int& s)
{
  side = new int(s);
}
Square::~Square()
{
  delete side;
}

int Square::getSide() const
{
  return *side;
}

void Square::setSide(const int& s)
{
  *side = s;
}

int* Square::getPtr() const
{
  return side;
}

#endif
