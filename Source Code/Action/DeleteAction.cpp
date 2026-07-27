#include "DeleteAction.h"
#include "Position.h"
#include "Document.h"

DeleteAction::DeleteAction(){

}


DeleteAction::DeleteAction(Position pos){
  position = pos;
}

void DeleteAction::execute(Document& doc) {
  character = doc.getCharacter(position);
  doc.erase(position);
}
void DeleteAction::undo(Document& doc){
  doc.insert(position, character);
}
