#ifndef Plugin_H
#define Plugin_H

#include<string>

class Document;
class Plugin
{
private:
  std::string name;
public:
  Plugin(/* args */);
  ~Plugin();
  std::string getName();
  virtual void execute(Document& document) = 0;
};

Plugin::Plugin(/* args */)
{
}

Plugin::~Plugin()
{
}



#endif