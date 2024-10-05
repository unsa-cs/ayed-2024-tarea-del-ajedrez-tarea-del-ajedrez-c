#include "chess.h"
#include "figures.h"

void display(){
  char** blackS = reverse(whiteSquare);
  char** whiteS = whiteSquare;
  char** prueba = repeatH(whiteS, 2);
  char** prueba2 = join(whiteS, blackS);
  char** prueba3 = join(whiteS, blackS, whiteS, blackS, whiteS, blackS, whiteS, blackS);
  interpreter(prueba3);
}
