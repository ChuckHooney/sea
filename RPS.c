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

//player1
  int Echo ;
  Echo = random1 ;
  int Ditto ;
  Ditto = 3 ;
  int player1 ; // Player 1
  player1 = Echo % Ditto ;
  //printf("%d\n", EchoDitto) ;

  if (player1 == ROCK ) {
    printf ("PLayer 1-Rock vs") ;
  } else if (player1 == PAPER) {
    printf ("PLayer 1-Paper vs") ;
  } else if (player1 == SCISSORS)
    printf ("PLayer 1-Scissors vs") ;


  int random2 = random() ;
  //printf ("%d\n", random2) ;

//player2
  int Echo2 ;
  Echo2 = random2 ;
  int Ditto2 ;
  Ditto2 = 3 ;
  int player2 ; // Player 2
  player2 = Echo2 % Ditto2 ;
  //printf("%d\n", EchoDitto2) ;

  if (player2 == ROCK ) {
    printf (" PLayer 2-Rock\n") ;
  } else if (player2 == PAPER) {
    printf (" PLayer 2-Paper\n") ;
  } else if (player2 == SCISSORS) {
    printf (" PLayer 2-Scissors\n") ;
  }

//rules
  if (player1 == player2){
      printf ("Tie\n") ;
  }else if ((player1 == ROCK) && (player2 == PAPER)){
    printf ("player2 Wins\n") ;
  }else if ((player1 == PAPER) && (player2 == ROCK)){
    printf ("player1 Wins\n") ;
  }else if ((player1 == ROCK) && (player2 == SCISSORS)){
    printf ("player1 Wins\n") ;
  }else if ((player1 == SCISSORS) && (player2 == ROCK)){
    printf ("player2 Wins\n") ;
  }else if ((player1 == PAPER) && (player2 == SCISSORS)){
    printf ("player2 Wins\n") ;
  }else if ((player1 == SCISSORS) && (player2 == PAPER)){
    printf ("player1 Wins\n") ;
  }

}
