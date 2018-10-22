#include <stdio.h>

void box (x){

  for (int i=1; i<=x; i++) {

    printf ("%d\n", i);

  }

}

int main () {
  box (10) ;
}
