#ifndef EDITORTAB_H
#define EDITORTAB_H


#include "Document.h";
#include "Cursor.h";
#include "HistoryManager.h";
#include "SearchEngine.h";
#include "DocumentStatistics.h";

class EditorTab
{
private:
  /* data */
  Document document;
  Cursor cursor;
  HistoryManager history;
  SearchEngine searchEngine;
  DocumentStatistics statistics;
public:
  EditorTab(/* args */);
  ~EditorTab();
  void undo();
  void redo();
  void save();
  void render();
};




#endif