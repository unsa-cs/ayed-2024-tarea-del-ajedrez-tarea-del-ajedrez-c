#include "chess.h"
#include "figures.h"
#include "stdio.h"
#include <stdlib.h>
#define MAX_SIZE 8


struct figureChess{
  char** arrayfigure[MAX_SIZE];
  char** figures;
};
void chess(figureChess* c){
  c->arrayfigure[0] = rook;
  c->arrayfigure[1] = knight;
  c->arrayfigure[2] = bishop;
  c->arrayfigure[3] = queen;
  c->arrayfigure[4] = king;
  c->arrayfigure[5] = bishop;
  c->arrayfigure[6] = knight;
  c->arrayfigure[7] = rook;
}
figureChess fila(figureChess c){
  c.figures = rook;
  for(int i = 1; i < MAX_SIZE; i++){
    c.figures = join(c.figures, c.arrayfigure[i]);
  }
  return c;
}

void display(){
  char** blackS = reverse(whiteSquare);
  char** whiteS = whiteSquare;
  char** knightB = reverse(knight);
  char** prueba2 = join(whiteS, blackS);
  char** prueba7 = repeatH(prueba2, 4);
  char** prueba8 = reverse(prueba7);
  char** prueba9 = knight;
  char** prueba10 = superImpose(whiteSquare, reverse(knight));
  char** prueba11 = superImpose(knight, whiteSquare);
  char** prueba12 = superImpose(knightB, prueba8);
  char** prueba13 = join(rook, knight); // torre con caballo
  char** prueba14 = join(prueba13, bishop); // + alfil
  char** prueba15 = flipH(prueba14);
  char** prueba16 = flipV(prueba14);
  //printf("tamaño de una figura es = %d\n", getSize(knight));
  char** prueba17 = join(join(join(join(join(join(join(rook, knight), bishop), queen), king), bishop), knight), rook);
  figureChess figure1;
  chess(&figure1);
  figure1 = fila(figure1);
  char** prueba18 = superImpose(reverse(figure1.figures), prueba8);
  interpreter(prueba18);

}

