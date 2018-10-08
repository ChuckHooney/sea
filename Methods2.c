#include <stdio.h>


void greater (int x, int y){
  if (x > y ){
    printf ("%d is greater than %d\n", x,y) ;

  }else if (x < y) {
    printf("%d is greater than %d\n", y,x) ;

  }else if (x == y) {
    printf ("%d is equal to %d\n", x,y) ;
  }

}

int main (){
    greater (10,10) ;
    greater (11,15) ;
    greater (-3,10000) ;

}
