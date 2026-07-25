#ifndef ACTION_H
#define ACTION_H

class Action
{
private:
  
public:
  Action();
  ~Action();
  virtual void execute() = 0;
  virtual void undo() = 0;
};

Action::Action()
{
}

Action::~Action()
{
}


#endif