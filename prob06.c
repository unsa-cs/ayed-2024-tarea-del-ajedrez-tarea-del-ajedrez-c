#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = reverse(knight);
  char** prueba1 = pawn;
  char** blackS = reverse(whiteSquare);
  char** whiteS = whiteSquare;
  char** prueba2 = join(whiteS, blackS);
  char** prueba7 = repeatH(prueba2, 4);
  char** prueba8 = reverse(prueba7);

  for(int i = 0; i < 3; i++){
    prueba1 = join(prueba1, prueba1);
  }
  char** prueba3 = superImpose(prueba1, prueba7);
  interpreter(prueba3);
}

