#ifndef INSERTACTION_H
#define INSERTACTION_H

#include "Action.h"

class InsertAction : public Action
{
private:
  /* data */
  int position;
  char character;
public:
  InsertAction(/* args */);
  ~InsertAction();
  void execute() override;
  void undo() override;
};

InsertAction::InsertAction(/* args */)
{
}

InsertAction::~InsertAction()
{
}


#endif