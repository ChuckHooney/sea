#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  ROCK 0
#define  PAPER 1
#define  SCISSORS 2

int main() {
  srandom (time (0));
  int random1 = random() ;
  //printf("%d\n", random1);

  int Echo ;
  Echo = random1 ;
  int Ditto ;
  Ditto = 3 ;
  int EchoDitto ; // Player 1
  EchoDitto = Echo % Ditto ;
  //printf("%d\n", EchoDitto) ;

  if (EchoDitto == ROCK ) {
    printf ("Player 1-Rock\n") ;
  } else if (EchoDitto == PAPER) {
    printf ("Player 1-Paper\n") ;
  } else if (EchoDitto == SCISSORS)
    printf ("Player 1-Scissors\n") ;


  int random2 = random() ;
  //printf ("%d\n", random2) ;


  int Echo2 ;
  Echo2 = random2 ;
  int Ditto2 ;
  Ditto2 = 3 ;
  int EchoDitto2 ; // Player 2
  EchoDitto2 = Echo2 % Ditto2 ;
  //printf("%d\n", EchoDitto2) ;

  if (EchoDitto2 == 0 ) {
    printf ("Player 2-Rock\n") ;
  } else if (EchoDitto2 == 1) {
    printf ("Player 2-Paper\n") ;
  } else if (EchoDitto2 == 2)
    printf ("Player 2-Scissors\n") ;

    if (EchoDitto == EchoDitto2){
      printf ("Tie\n") ;
    }else if ((EchoDitto == ROCK) && (EchoDitto2 == 1)){
      printf ("PLayer2 Wins\n") ;
    }

}
