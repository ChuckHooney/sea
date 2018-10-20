#include <stdio.h>

void table (int x,int y) {

  for (int m=x; m<=50; m++, y++) {
      printf ("%d * %d =%d\n", x, y, x*y) ;
  }
}


int main (){
  table (5,2) ;
  table (5,3) ;
  table (5,4) ;
}
