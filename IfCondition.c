#include <stdio.h>
int main()
{
  int Upgrade ;
  Upgrade = 11 ;
  int Bloxx ;
  Bloxx = 2 ;
  int Nanomech ;
  Nanomech = Upgrade % Bloxx ;

  printf("%d\n",Nanomech) ;

  if (Nanomech == 0) {
    printf ("Heatblast\n") ;
  }else {
    printf ("Bif Chill\n") ;
  }



   return 0;
}
