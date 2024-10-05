#include "chess.h"
#include "figures.h"

void display(){
  char** blackS = reverse(whiteSquare);
  char** whiteS = whiteSquare;
  char** prueba = repeatH(whiteS, 2);
  char** prueba2 = join(whiteS, blackS);
  //char** prueba3 = join(whiteS, blackS, whiteS, blackS, whiteS, blackS, whiteS, blackS);
  char** prueba4 = join(whiteS, blackS);
  char** prueba5 = join(prueba2, prueba4);
  interpreter(prueba5);
}
