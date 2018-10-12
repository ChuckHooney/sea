#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomx (int x) {

  int random1 = random () ;

  int specificrandom ;
  specificrandom = random1 % x ;
  printf ("generating random number between 0 and %d = %d\n ", x,specificrandom) ;
}

int main(){
//mod
  srandom (time (0));
  
  randomx (10);
  randomx (10);
  randomx (10);
  randomx (10);

}
