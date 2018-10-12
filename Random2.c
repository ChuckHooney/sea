#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomx (int x) {

  srandom (time (0));

  int random1 = random () ;
  //printf ("%d\n", random1) ;

int mod ;
mod = x ;

int number;
  number = random1 ;
int specificrandom ;
  specificrandom = random1 % mod ;
  printf ("%d\n", specificrandom) ;
}

int main(){
//mod
randomx (-10);
randomx (10);
randomx (37);
randomx (984);

}
