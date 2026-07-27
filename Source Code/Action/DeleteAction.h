#ifndef DELETEACTION_H
#define DELETEACTION_H

#include "Action.h"
#include "Position.h"

class DeleteAction : public Action
{
private:
  /* data */
  Position position;
  char character;
public:
  DeleteAction(/* args */);
  DeleteAction(Position pos);
  ~DeleteAction();
  void execute(Document& doc) override;
  void undo(Document& doc) override;
};

DeleteAction::DeleteAction(/* args */)
{
}

DeleteAction::~DeleteAction()
{
}

#endif