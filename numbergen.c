/*since you didnt give me your random number generator... douche ;) */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

#define STOP		( 10 * (1000*1000) ) /* preprocessor macro. use these whenever you use a constant. they're faster */



int main(int argc, char *argv[]){
  /*generate a bunch of random numbers and send to stdout; i'm directing to a file and executing our code after*/
  int i;
  for (i = 0; i < STOP; i++){
    printf("%d\n", rand()%STOP+1); /*curious to see how many numbers we'll end up with*/
  }
  return 0;
}
