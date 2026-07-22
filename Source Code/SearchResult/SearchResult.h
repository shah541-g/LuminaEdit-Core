#ifndef SEARCHRESULT_H
#define SEARCHRESULT_H
#include <string>
class SearchResult
{
private:
public:
  int line;
  int column;
  std::string matchedText;
  SearchResult();
  ~SearchResult();
};



#endif