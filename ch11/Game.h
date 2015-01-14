#ifndef GAME_H
#define GAME_H

#include <string>

struct Game
{
  // members belonging to the structure
  int playerBase; 
  std::string title; // the title of the game
  std::string developer; // yada yada
  int tonysCoolnessFactor;
  
  std::string genre;
  std::string dateReleased;
};

#endif
