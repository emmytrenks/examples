#ifndef PAL_HPP
#define PAL_HPP

// we have to include the full library because we need to use parts of it


class Pal
{
 public:
  int diddy;
  Pal(const Buddy& b) { diddy = b.data; }
};

#endif
