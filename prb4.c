#include "chess.h"
#include "figures.h"
#include "stdio.h"
#define MAX_SIZE 8


struct figureChess{
  char** arrayfigure[MAX_SIZE];
  char** figures;
};
void chess(figureChess c){
  c.arrayfigure[1] = rook;
  c.arrayfigure[2] = knight;
  c.arrayfigure[3] = bishop;
  c.arrayfigure[4] = queen;
  c.arrayfigure[5] = king;
  c.arrayfigure[6] = bishop;
  c.arrayfigure[7] = knight;
  c.arrayfigure[8] = rook;
}
figureChess fila(figureChess c){
  for(int i = 0; i < MAX_SIZE; i++){
    c.figures = join(c.figures, c.arrayfigure[i]);
  }
  return c;
}


/*int getSize(char** figure){
  int size = 0;
  while(figure[size]){
    size++;
  }
  return size; 
};*/

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
  chess(figure1);
  fila(figure1);
  interpreter(figure1.figures);

}
