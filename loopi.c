#include <stdio.h>

void box (x){

  for (int i=1; i<=x; i++) {

    int z ;
    z = i % 2 ;
    if (z == 0){
      printf (" ");
    }

    printf ("%d\n", i);






  }

}

int main () {
  box (10) ;
}
