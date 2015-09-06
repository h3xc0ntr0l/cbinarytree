#include "header.h"

#define K 	1024

void usage();

void parse(char *buff); /*takes the string number, atoi's to get an integer, and then inserts into tree*/

NODE *root;

int main(int argc, char *argv[]){
  if (argc != 2){
    usage();
    exit(0);
  }
  FILE *fd;
  fd = fopen(argv[1], "r");
  if (fd == NULL){
    printf("couldn't open the file provided. exiting\n");
    exit(0);
  }
  /*now let's read the file in, shall we?*/
  char *buff;
  buff = malloc(sizeof(char *));
  while (fgets(buff, K, fd)){
    parse(buff);
  }

  /* now let's ask if you want to print the tree :) */
  char *inputAnswer;
  inputAnswer = malloc(sizeof(char *));
  printf("print tree? (y/n): ");
  fgets(inputAnswer, K, stdin); /* notice i used "1" instead of a FILE *descriptor, because it's STDIN! :) (you shouldnt do this tho lol */
  if (inputAnswer[0] == 'y' || inputAnswer[0] == 'Y'){
    traverse(root);
  } else {
    printf("bye! :) \n");
  }

  /*remember to free our memory!*/
  free(buff);
  free(inputAnswer);
  fclose(fd);


  return 0;
}


void usage(){
  printf("\nhere's how to use this program.\n give it a file of numbers, separated by line, as the first argument. example:\n./btree numbers.txt\n");
  return;
}

void parse(char *buff){
  int num;
  num = atoi(buff);
  NODE *ptr;
  if (root == NULL){
    root = malloc(sizeof(NODE *));
    root->key = num;
  } else {
    ptr = make_node(num);
    hang_node(root, ptr);
  }
}
