

#include "Position.h"
#include <string>
//#include <sstream>

Position::Position(signed int x, signed int y)
{
  x_ = x;
  y_ = y;
}

signed int Position::getX()
{
  return x_;
};

signed int Position::getY()
{
  return y_;
}

bool Position::parse(std::string input)
{
  std::string::size_type count;
  count = input.find(",");
  if((input.find(")") != -1) && (input.find(",") != -1))
  {
    x_ = std::stoi(input.substr(1,count));
    y_ = std::stoi(input.substr(count+1,(input.find(")")-1)));
    
    return true;
  }else
  {
    return false;
  }
};

std::string Position::toString()
{
  std::string outstring;
  outstring += "(";
  outstring += std::to_string(x_);
  outstring += ",";
  outstring += std::to_string(y_);
  outstring += ")";
  return outstring;
};