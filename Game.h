

#include <iostream>
#include "Tile.h"

class Game
{
  public:
    Game();
    void setStartTile(Tile* setTile);
    void setRunning(bool Run);
    void run();
    void togglePlayer();
    Color getActivePlayer();
  private:
    Color Activeplayer;
    Tile* Starttile;
    bool Running;
};