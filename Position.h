
#include <iostream>

class Position
{
  public:
    Position(signed int x, signed int y);
    signed int getX();
    signed int getY();
    bool parse(std::string input);
    std::string toString();
  private:
    signed int x_;
    signed int y_;
};
