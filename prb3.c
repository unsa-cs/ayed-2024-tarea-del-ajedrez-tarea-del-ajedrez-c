#include "chess.h"
#include "figures.h"
 
void display(){
  char** blackS = reverse(whiteSquare);
  char** whiteS = whiteSquare;
  char** prueba2 = join(whiteS, blackS);
  char** prueba7 = repeatH(prueba2, 4);
  char** prueba8 = reverse(prueba7);
  char** prueba9 = flipH(prueba7);
  char** prueba10 = up(prueba7, prueba8);
  char** prueba11 = superImpose(prueba7,prueba8);
  char** prueba12 = up(prueba8, prueba7);
  char** prueba13 = up(prueba12, prueba12);
  for(int i = 0; i < 2 ; i++){
    prueba12 = up(prueba12, prueba12);
  }
  interpreter(prueba12);
}
