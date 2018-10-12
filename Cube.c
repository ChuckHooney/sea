#include <stdio.h>

void cubes (int x) {
  int z ;
  z = x * x * x ;
  printf ("the cube of %d is %d\n", x,z) ;
}

int main () {
  cubes (5) ;
  cubes (-5) ;
  cubes (37) ;
  cubes (13) ;
}
