#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H

#include<unordered_map>
#include<vector>
class Document;
class SearchResult;
class SearchEngine
{
private:
  
  std::unordered_map<std::string,std::vector<int>> index;

public:
  SearchEngine(/* args */);
  ~SearchEngine();
  void buildIndex(Document& document);
  std::vector<SearchResult> search(std::string word);
  void replaceAll(std::string oldString, std::string newString);
};

SearchEngine::SearchEngine(/* args */)
{
}

SearchEngine::~SearchEngine()
{
}



#endif