#include <stdio.h>

void squares (int x){
  int z ;
  z = x * x ;
  printf ("the square of %d is %d\n", x,z) ;
}

int main () {
  squares (10) ;
  squares (12567) ;
  squares (296) ;
  squares (9999) ;
  squares (-5) ;
}
