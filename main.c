#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//intro to collin

int main(int argc, char *argv[]){
  printf("%s\n", argv[0]); //print first argument
  FILE *fd;
  fd = fopen("file.txt", "r");
  char *buff;
  buff = malloc(sizeof(char *));
  while(fgets(buff, 1024, fd)){
    printf("%s\n", buff); //now your reading lines
  }
  free(buff);
  fclose(fd);
  //always free your buffers
  return 0;
}
