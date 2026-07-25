#ifndef HISTORYMANAGER_H
#define HISTORYMANAGER_H

#include<stack>
class Action;

class HistoryManager
{
private:
  std::stack<Action*> undoStack;
  std::stack<Action*> redoStack;
public:
  HistoryManager(/* args */);
  ~HistoryManager();
  void execute(Action* action);
  void undo();
  void redo();
};

HistoryManager::HistoryManager(/* args */)
{
}

HistoryManager::~HistoryManager()
{
}


#endif