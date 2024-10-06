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

void display(){
  //Squares
  char** blackS = reverse(whiteSquare);
  char** whiteS = whiteSquare;
  char** joinWhiteBlack = join(whiteS, blackS);
  // Row Chess Square
  char** rowFirst = repeatH(joinWhiteBlack, 4);
  char** rowFirstReverse = reverse(rowFirst);
  //Board Chess
  char** twoRow = up(rowFirstReverse, rowFirst);
  char** boardChess = repeatV(twoRow, 4);
  //Figures
  figureChess rowStart;
  chess(&rowStart);
  rowStart = row(rowStart);
  //Only Figures
  char** rowFiguresStart = rowStart.figures;
  char** rowFiguresStartReverse = reverse(rowFiguresStart);
  //With Square
  char** rowStartBox = superImpose(rowStart.figures, rowFirstReverse);
  char** rowStartBoxReverse = superImpose(reverse(rowStart.figures), rowFirstReverse);
  //Row Pawn    
  char** rowPawn = join(join(join(join(join(join(join(pawn, pawn), pawn), pawn), pawn), pawn), pawn), pawn);
  char** rowPawnReverse = reverse(rowPawn);
  //Figures White
  char** figuresWhite = up(rowFiguresStart, rowPawn);
  //Square with Figures
   
  //Interpreter
  interpreter(boardChess);
}

