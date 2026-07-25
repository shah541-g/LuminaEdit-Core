#ifndef CppFormatterPlugin_H
#define CppFormatterPlugin_H

#include "Plugin.h"

class Document;
class CppFormatterPlugin : public Plugin
{
private:
  /* data */
public:
  CppFormatterPlugin(/* args */);
  ~CppFormatterPlugin();
  void execute(Document& document);
};

CppFormatterPlugin::CppFormatterPlugin(/* args */)
{
}

CppFormatterPlugin::~CppFormatterPlugin()
{
}



#endif