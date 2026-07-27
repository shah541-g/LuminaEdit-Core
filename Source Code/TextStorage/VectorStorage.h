#ifndef VECTORSTORAGE_H
#define VECTORSTORAGE_H

#include "ITextStorage.h"
#include <vector>

class VectorStorage : public ITextStorage
{
private:
  /* data */
  vector<vector<char>> content;

  bool isValidPosition(Position& pos);
public:
  VectorStorage(/* args */);
  virtual void insert(Position &pos, char newChar) const override;
  virtual void erase(Position &pos) override;
  virtual char getCharacter(Position &pos) const override;
  virtual std::string getLine() const override;
  virtual std::string getText() const override;
  virtual int length() const override;
  virtual int lineCount() const override;
  ~VectorStorage();
};

VectorStorage::VectorStorage(/* args */)
{
}

VectorStorage::~VectorStorage()
{
}

#endif