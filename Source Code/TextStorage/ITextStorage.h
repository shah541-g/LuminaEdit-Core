#ifndef ITEXTSTORAGE_H
#define ITEXTSTORAGE_H
#include <string>
class Position;

class ITextStorage
{
public:
  ITextStorage();
  virtual void insert(Position &pos, char newChar) const = 0;
  virtual void erase(Position &pos) = 0;
  virtual char getCharacter(Position &pos) const = 0;
  virtual std::string getLine() const = 0;
  virtual std::string getText() const = 0;
  virtual int length() const = 0;
  virtual int lineCount() const = 0;
  virtual ~ITextStorage();
};

#endif