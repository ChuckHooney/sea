#include <stdio.h>

void table (int x,int y) {

  for (int m=1; m<=13; m++) {
      printf ("17 * %d =%d\n", m, m*17) ;
  }
}


int main (){
  table (5,2) ;
}
