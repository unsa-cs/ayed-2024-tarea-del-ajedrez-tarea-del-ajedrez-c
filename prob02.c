#include "chess.h"
#include "figures.h"
 
void display(){
  char** blackS = reverse(whiteSquare);
  char** whiteS = whiteSquare;
  char** joinWhiteBlack = join(whiteS, blackS);
  char** rowFirst = repeatH(joinWhiteBlack, 4);
  char** rowFirstReverse = reverse(rowFirst);

  interpreter(rowFirstReverse);
}

