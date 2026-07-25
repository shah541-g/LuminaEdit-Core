#ifndef DELETEACTION_H
#define DELETEACTION_H

#include "Action.h"

class DeleteAction : public Action
{
private:
  /* data */
  int position;
  char character;

public:
  DeleteAction(/* args */);
  ~DeleteAction();
  void execute() override;
  void undo() override;
};

DeleteAction::DeleteAction(/* args */)
{
}

DeleteAction::~DeleteAction()
{
}

#endif