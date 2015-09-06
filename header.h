#ifndef HEADER_H
#define HEADER_H

typedef struct BINARYTREE{
  struct BINARYTREE *left;
  struct BINARYTREE *right;
  int key;
}NODE;


NODE *make_node(int key);
void hang_node(NODE *root, NODE *ptr);
void traverse(NODE *ptr);
void printNode(int key);


#endif



