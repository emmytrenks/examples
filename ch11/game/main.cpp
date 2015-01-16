#include <string>
#include <iostream>
#include "Game.h"

//using namespace std;

// function declaration
bool compareGames(const Game& a, const Game& b);

int main(int argc, char* argv[])
{
  // create a Game object
  Game g;
  
  // input game information
  std::cout << "Enter the title: ";
  getline(std::cin, g.title);

  std::cout << "Enter the developer: ";
  getline(std::cin, g.developer);

  std::cout << "Enter the genre: ";
  getline(std::cin, g.genre);
  
  std::cout << "Enter the date released: ";
  getline(std::cin, g.dateReleased);

  std::cout << "Enter tony's coolness factor: ";
  std::cin >> g.tonysCoolnessFactor;

  std::cout << "Enter the player base: ";
  std::cin >> g.playerBase;

  // output the values in our object
  std::cout << "The title: ";
  std::cout << g.title << std::endl;
  
  std::cout << "The developer: ";
  std::cout << g.developer << std::endl;
  
  std::cout << "The genre: ";
  std::cout << g.genre << std::endl;
  
  std::cout << "The date released: ";
  std::cout << g.dateReleased << std::endl;

  std::cout << "Tony's coolness factor: ";
  std::cout << g.tonysCoolnessFactor << std::endl;

  std::cout << "The player base: ";
  std::cout << g.playerBase << std::endl;

  // make an array of games
  
  Game games[10];

  games[0].title = "first game";
  games[1].title = "first game";

  games[0].developer = "";
  games[1].developer = "";

  games[0].genre = "";
  games[1].genre = "";

  games[0].dateReleased = ""; 
  games[1].dateReleased = "";

  games[0].tonysCoolnessFactor = 100; 
  games[1].tonysCoolnessFactor = 100;

  games[0].playerBase = 10;
  games[1].playerBase = 10;
  
  std::cout << "The games are "
	    << (compareGames(games[0], games[1]) ? "" : "not")
	    << "equal" << std::endl;

}

// to compare two instances of a structure

// this does not work
// if (games[0] == games[1])

// this is how you need to do it
// if (games[0].title == games[1].title && games[0].developer == games[1].developer && ....  

bool compareGames(const Game& a, const Game& b)
{
  return (
	  a.title == b.title &&
	  a.developer == b.developer &&
	  a.genre  == b.genre &&
	  a.tonysCoolnessFactor== b.tonysCoolnessFactor &&
	  a.playerBase == b.playerBase &&
	  a.dateReleased == b.dateReleased
	  );
}
