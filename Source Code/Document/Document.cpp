#include "Document.h"
#include "ITextStorage.h"
Document::Document(){

}
Document::Document(ITextStorage* textStorage, std::string filePath){
  this->storage = textStorage;
  this->filePath = filePath;
};

void Document::erase(Position& pos){
  storage->erase(pos);
}

char Document::getCharacter(Position& pos){
  storage->getCharacter(pos);
}