#include "chess.h"
#include "figures.h"
 
void display(){
  char** blackS = reverse(whiteSquare);
  char** whiteS = whiteSquare;
  char** joinWhiteBlack = join(whiteS, blackS);
  char** rowFirst = repeatH(joinWhiteBlack, 4);
  char** rowFirstReverse = reverse(rowFirst);
  //char** flipRow = flipH(rowFirst);
  char** upRow = up(rowFirstReverse, rowFirst);
  //char** imposeRow = superImpose(rowFirstReverse, rowFirst);
  char** upRowDouble = up(upRow, upRow);
  //char** repeatWhite = repeatV(whiteS, 4);
  //char** repeatBlack = repeatV(blackS, 4);
  char** boardChessHalf = repeatV(upRow, 2);
  interpreter(boardChessHalf);
}
