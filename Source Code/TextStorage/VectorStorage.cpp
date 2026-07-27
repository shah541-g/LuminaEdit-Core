#include "VectorStorage.h"
#include "Position.h"

bool VectorStorage::isValidPosition(Position& pos){
  return pos.getColumn()<content.size() && pos.getLine()< content[0].size() && pos.getColumn()>=0 && pos.getLine() >=0;
}


void VectorStorage::erase(Position& pos){
  if(isValidPosition(pos)){
    
  }
}