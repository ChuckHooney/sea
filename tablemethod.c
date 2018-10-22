#include <stdio.h>

void table (int x,int y) {

  for (int m=1; m<=y; m++) {
      printf ("%d * %d =%d\n", x,m, m*x) ;
  }
}


int main (){
  table (12,5) ;
}
