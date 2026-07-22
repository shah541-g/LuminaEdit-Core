#ifndef CURSORCONTROLLER_H
#define CURSORCONTROLLER_H

class Document;
class Cursor;

class CursorController
{
private:
  
public:
  CursorController();
  void moveLeft(Document& doc, Cursor &cursor);
  void moveRight(Document& doc, Cursor &cursor);
  void moveUp(Document& doc, Cursor &cursor);
  void moveDown(Document& doc, Cursor &cursor);
  void moveLineStart(Document& doc, Cursor &cursor);
  void moveLineEnd(Document& doc, Cursor &cursor);
  ~CursorController();
};



#endif