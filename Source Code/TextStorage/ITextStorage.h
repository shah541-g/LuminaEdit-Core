#ifndef ITEXTSTORAGE_H
#define ITEXTSTORAGE_H
#include<string>
class Position;

class ITextStorage{
  public:
  ITextStorage();
  virtual void insert(Position& pos, char newChar) = 0;
  virtual void erase(Position& pos) = 0;
  virtual std::string getLine() = 0;
  virtual std::string getText() = 0;
  virtual ~ITextStorage();
};

#endif