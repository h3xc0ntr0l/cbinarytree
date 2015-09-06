#include "header.h"

NODE *make_node(int key){
  NODE *tmp;
  tmp = malloc(sizeof(NODE *));
  tmp->key = key;
  tmp->left = NULL;
  tmp->right = NULL;
  return tmp;
}

void hang_node(NODE *root, NODE *ptr){
  NODE *tmp;
  tmp = root;
  while(1){
    if (ptr->key >= tmp->key){
      if (tmp->right){
        tmp = tmp->right;
      } else {
        tmp->right = ptr;
        ptr = tmp->right;
      }
    } else if (ptr->key <= tmp->key){
      if (tmp->left){
        tmp = tmp->left;
      } else {
        tmp->left = ptr;
        ptr = tmp->left;
      }
    }
  }
}

void traverse(NODE *root){
  if (root){
    traverse(root->left);
    printNode(root->key);
    traverse(root->right);
  }
}

void printNode(int key){
  printf("%d\n", key);
}
