#include <stdio.h>
#include <stdlib.h>


void add (int x, int y){
  printf ("We are Venom\n") ;
  printf ("%d\n", x) ;
  printf ("%d\n", y) ;

  int z ;
  z = x + y ;
  printf ("%d\n", z) ;
}

void subtract (int x, int y) {
  printf ("I am Carnage\n") ;
  printf ("%d\n", x) ;
  printf ("%d\n", y) ;

  int z ;
  z = x - y ;
  printf ("%d\n", z) ;
}

void divide (float x, float y) {
  printf ("Toxinnnnnnnnn\n") ;
  printf ("%.3f\n", x) ;
  printf ("%.3f\n", y) ;

  float z ;
  z = x / (float)y ;
  printf ("%.3f\n", z) ;
}

void multiply (int x, int y) {
  printf ("Anti-Venom, Destroy!\n") ;
  printf ("%d\n", x) ;
  printf ("%d\n", y) ;

  int z ;
  z = x * y ;
  printf ("%d\n", z) ;
}

int main() {
  add (11,-13) ;
  subtract (11,13 ) ;
  divide (-10.5, 3.1) ;
  multiply (2, 5) ;
}
