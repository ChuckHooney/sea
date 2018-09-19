#include <stdio.h>
#include <stdlib.h>


void play (int x, int y){
  printf ("We are Venom\n") ;
  printf ("%d\n", x) ;
  printf ("%d\n", y) ;

  int z ;
  z = x + y ;
  printf ("%d\n", z) ;
}

int main() {
  play(11,13) ;
}
