#include "chess.h"
#include "figures.h"

void display(){
  char** whiteS = whiteSquare;
  char** prueba = repeatH(whiteS, 2);
  interpreter(prueba);
}
