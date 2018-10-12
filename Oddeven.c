#include <stdio.h>

void OddEven (int x){
  int z ;
  z = x % 2 ;

  if (z == 0){
    printf ("%d is even\n", x) ;
  }
  else if (z == 1){
    printf ("%d is odd\n", x) ;
  }
}

int main (){
  OddEven (11) ;
  OddEven (32) ;
  OddEven (0) ;
  OddEven (1) ;
  OddEven (2) ;
}
