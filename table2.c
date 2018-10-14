#include <stdio.h>

int main () {
  for (int i=2, m=1; i <= 20; i = i + 2, m ++) {
      printf ("2 * %d = %d\n", m,i) ;

  }
  printf ("---------------------\n") ;

  for (int i=5, m=1; m <= 13; i = i + 5, m++) {
      printf ("5 * %d = %d\n", m,i) ;
  }
  printf ("---------------------\n") ;


  for (int i=17, m=1; m<=13; i = i + 17, m++){
      printf ("17 * %d = %d\n", m,i) ;
  }
  printf ("---------------------\n") ;

//one variable
  for (int m=1; m<=13; m++) {
      printf ("17 * %d =%d\n", m, m*17) ;
  }
  printf ("---------------------\n") ;

}
