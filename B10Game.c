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
  Bloxx = 10 ;
  int Nanomech ;
  Nanomech = Upgrade % Bloxx ;
  Nanomech = Nanomech + 1 ;
  printf("%d\n",Nanomech) ;
  //lalalalalalalalallala

  if (Nanomech == 10) {
    printf ("Upgrade\n") ;
  }else if (Nanomech == 9){
    printf ("Big Chill\n") ;
  }else if (Nanomech == 8) {
    printf ("Goop\n") ;
  }else if (Nanomech == 7) {
    printf ("Echo Echo\n") ;
  }else if (Nanomech == 6) {
    printf ("Chromastone\n") ;
  }else if (Nanomech == 5) {
    printf ("Armodrillo\n") ;
  }else if (Nanomech == 4) {
    printf ("Jetray\n") ;
  }else if (Nanomech == 3) {
    printf ("Ampfibian\n") ;
  }else if (Nanomech == 2) {
    printf ("XlR8\n") ;
  }else if (Nanomech == 1) {
    printf ("Wildmutt\n") ;
  }







   return 0;
}
