#include "chess.h"
#include "figures.h"

void display(){
  char** blackS = reverse(whiteSquare);
  char** whiteS = whiteSquare;
  char** repeatSquareWhite = repeatH(whiteS, 2);
  char** joinWhiteBlack = join(whiteS, blackS);
  char** rowFirst = repeatH(joinWhiteBlack, 4);
  interpreter(rowFirst);
}
