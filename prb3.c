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
  interpreter(prueba11);
}
