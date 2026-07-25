#ifndef REPLACEACTION_H
#define REPLACEACTION_H

#include "Action.h"
#include<string>

class ReplaceAction : public Action
{
private:
  /* data */
  std::string oldText;
  std::string newText;
public:
  ReplaceAction(/* args */);
  ~ReplaceAction();
  void execute() override;
  void undo() override;
};

ReplaceAction::ReplaceAction(/* args */)
{
}

ReplaceAction::~ReplaceAction()
{
}


#endif