#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srandom (time (0));

  int random1 =  random() ;
  printf ("%d\n", random1) ;

  int Upgrade ;
  Upgrade = random1 ;
  int Bloxx ;
  Bloxx = 6 ;
  int Nanomech ;
  Nanomech = Upgrade % Bloxx ;
  Nanomech = Nanomech + 1 ;

  printf("%d\n",Nanomech) ;









   return 0;
}
