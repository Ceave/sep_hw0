

#include <iostream>
#include "Color.h"

#ifndef _TILE_H_
#define _TILE_H_


class Tile
{
  public:
    enum Type
      {
        TYPE_CROSS = 1,
        TYPE_CURVE_1 = 2,
        TYPE_CURVE_2 = 3
      };
      Tile(Type Side, Color Topcolor);
  private:
     Type Side;
     Color Topcolor;
};

#endif