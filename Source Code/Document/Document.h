#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <string>
class ITextStorage;
class Position;

class Document{
  private:
  ITextStorage* storage;
  std::string filePath;
  bool modified;

  public:
  void load();
  void save();
  void insert(Position& pos, char newChar);
  void erase(Position& pos);
  void replace(char oldChar,char newChar);
  std::string getLine(int lineNo);
  int lineCount();
};

#endif 