#include <stdio.h>
#include <stdlib.h>

extern int x;
extern int y;

typedef struct binarytree
{
    int f;
    char ch;
    struct binarytree *left, *right;
}binarytree;

void assign(void)
{
    x = 1;
    y = 2;
}

binarytree *createTreeNode(int f, char ch)
{
    binarytree *newNode;
    newNode = malloc(sizeof(binarytree));
    newNode->f = f;
    newNode->ch = ch;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

