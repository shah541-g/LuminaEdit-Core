#ifndef DOCUMENTSTATISTICS_H
#define DOCUMENTSTATISTICS_H
#include<unordered_map>
#include<string>

class DocumentStatistics
{
private:
  int totalCharacters;
  int totalLines;
  int longestLine;
  std::unordered_map<std::string,int> keywordFrequency;
public:
  DocumentStatistics(int totalCharacters, int totalLines, int longestLine, std::unordered_map<std::string,int> keywordFrequency);
  ~DocumentStatistics();
};


#endif