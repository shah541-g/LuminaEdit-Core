#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include<vector>
#include<string>
class EditorTab;
class Plugin;

class CodeEditor
{
private:
  /* data */
  std::vector<EditorTab*> tabs;
  std::vector<Plugin*> plugins;
  int activeTabIndex;
public:
  CodeEditor(/* args */);
  ~CodeEditor();
  void openFile(std::string path);
  void newTab();
  void closeTab(int index);
  void switchTab(int index);
  void registerPlugin(Plugin* plugin);
  void removePlugin(std::string name);
};

CodeEditor::CodeEditor(/* args */)
{
}

CodeEditor::~CodeEditor()
{
}



#endif