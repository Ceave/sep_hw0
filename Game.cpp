

#include "Game.h"

Game::Game()
{
    Activeplayer = COLOR_WHITE;
    Starttile = nullptr;
};

void Game::setStartTile(Tile* setTile)
{
    Starttile = setTile;
};

void Game::run()
{
    Running = true;
    while(Running)
    {
      std::cout << "sep> ";
      std::string a;
      std::cin >> a;
      if(a == "quit")
        {
          Running = false;
        }
    }
};

void Game::setRunning(bool Run)
{
    Running = Run;
};

void Game::togglePlayer()
{
    if(Activeplayer == COLOR_WHITE)
    {
        Activeplayer = COLOR_RED;
    }else
    {
        Activeplayer = COLOR_WHITE;
    }
};

Color Game::getActivePlayer()
{
  return Activeplayer;
};




