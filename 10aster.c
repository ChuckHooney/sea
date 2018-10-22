#include <stdio.h>

void box (x){

  for (int i=1; i<=x; i++) {

    printf ("**********\n");

  }

}

int main () {
  box (10) ;
}
