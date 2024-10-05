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
  for(int i = 0; i < 2; i++){
    prueba2 = join(prueba2, prueba2);
  }
  interpreter(reverse(prueba2));
}

