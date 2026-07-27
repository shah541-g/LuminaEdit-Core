#ifndef ACTION_H
#define ACTION_H

class Document;

class Action
{
private:
  
public:
  Action();
  ~Action();
  virtual void execute(Document& doc) = 0;
  virtual void undo(Document& doc) = 0;
};

Action::Action()
{
}

Action::~Action()
{
}


#endif