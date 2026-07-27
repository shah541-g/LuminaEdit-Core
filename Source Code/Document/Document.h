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
  Document();
  Document(ITextStorage* textStorage, std::string filePath);
  char getCharacter(Position& pos);
  void load();
  void save();
  void insert(Position& pos, char newChar);
  void erase(Position& pos);
  void replace(char oldChar,char newChar);
  std::string getLine(int lineNo);
  int lineCount();
};

#endif 