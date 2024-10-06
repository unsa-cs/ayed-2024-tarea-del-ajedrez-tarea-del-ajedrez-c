#include "chess.h"
#include "figures.h"
#include "stdio.h"
#include <stdlib.h>
#define MAX_SIZE 8


struct figureChess{
  char** arrayfigure[MAX_SIZE];
  char** figures;
};
void chess(figureChess* box){
  box->arrayfigure[0] = rook;
  box->arrayfigure[1] = knight;
  box->arrayfigure[2] = bishop;
  box->arrayfigure[3] = queen;
  box->arrayfigure[4] = king;
  box->arrayfigure[5] = bishop;
  box->arrayfigure[6] = knight;
  box->arrayfigure[7] = rook;
}
figureChess row(figureChess box){
  box.figures = rook;
  for(int i = 1; i < MAX_SIZE; i++){
    box.figures = join(box.figures, box.arrayfigure[i]);
  }
  return box;
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
  char** joinWhiteBlack = join(whiteS, blackS);
  char** rowFirst = repeatH(joinWhiteBlack, 4);
  char** rowFirstReverse = reverse(rowFirst);
  char** rowFigures = join(join(join(join(join(join(join(rook, knight), bishop), queen), king), bishop), knight), rook);

  figureChess rowStart;
  chess(&rowStart);
  rowStart = row(rowStart);
  char** rowStartBox = superImpose(rowStart.figures, rowFirstReverse);
  char** rowStartBoxReverse = superImpose(reverse(rowStart.figures), rowFirstReverse);
  interpreter(rowStartBoxReverse);
  
}
