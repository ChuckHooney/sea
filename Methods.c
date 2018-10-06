#include <stdio.h>
#include <stdlib.h>


void add (int x, int y){
  printf ("%d + %d = " ,x,y) ;

  int z ;
  z = x + y ;
  printf ("%d\n", z) ;
}

void subtract (int x, int y) {
  printf ("%d - %d = " ,x,y) ;

  int z ;
  z = x - y ;
  printf ("%d\n", z) ;
}

void divide (float x, float y) {
  printf ("%.3f / %.3f = " ,x,y) ;

  float z ;
  z = x / (float)y ;
  printf ("%.3f\n", z) ;
}

void mul (int x, int y) {
  printf ("%d x %d = ",x,y) ;

  int z ;
  z = x * y ;
  printf ("%d\n", z) ;
}

int main() {
  add (11,-13) ;
  subtract (11,13 ) ;
  divide (-10.5, 3.1) ;
  mul (2, 5) ;
}
