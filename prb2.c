#include "chess.h"
#include "figures.h"
 
void display(){
  char** blackS = reverse(whiteSquare);
  char** whiteS = whiteSquare;
  char** prueba = repeatH(whiteS, 2);
  char** prueba2 = join(whiteS, blackS);
  char** prueba4 = join(whiteS, blackS);
  char** prueba7 = repeatH(prueba2, 4);
  char** prueba8 = reverse(prueba7);
  interpreter(prueba8);
}

