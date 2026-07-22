#ifndef CURSOR_H
#define CURSOR_H
class Position;


class Cursor
{
private:
  Position* pos;
public:
  Cursor(Position& pos);
  int getLine();
  int getColumn();
  int setPosition(Position& pos);
  ~Cursor();
};


#endif