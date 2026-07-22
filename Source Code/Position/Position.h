#ifndef POSITION_H
#define POSITION_H

class Position
{
private:
  /* data */
  int line;
  int column;
public:
  Position(int line, int column);
  void setLineNumber(int line);
  void setColumnNumber(int column);
  int getLine();
  int getColumn();
  ~Position();
};



#endif