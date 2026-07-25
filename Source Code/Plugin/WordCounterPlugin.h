#ifndef WORDCOUNTERPLUGIN_H
#define WORDCOUNTERPLUGIN_H

#include "Plugin.h"

class Document;
class WordCounterPlugin : public Plugin
{
private:
  /* data */
public:
  WordCounterPlugin(/* args */);
  ~WordCounterPlugin();
  void execute(Document& document);
};

WordCounterPlugin::WordCounterPlugin(/* args */)
{
}

WordCounterPlugin::~WordCounterPlugin()
{
}



#endif