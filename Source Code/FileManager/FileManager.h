#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include<string>
class Document;


class FileManager
{
private:
  
public:
  FileManager();
  Document& load(std::string path);
  void save(Document& doc);
  void saveAs(Document& doc, std::string path);
  ~FileManager();
};




#endif