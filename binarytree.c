#include <stdio.h>
#include <stdlib.h>

extern int x;
extern int y;

typedef struct binarynode
{
    int f;
    char ch;
    struct binarynode *left, *right;
}binarynode;

/*void assign(void)
{
    x = 1;
    y = 2;
}*/

binarynode *createTreeNode(int f, char ch)
{
    binarynode *newNode;
    newNode = malloc(sizeof(binarynode));
    newNode->f = f;
    newNode->ch = ch;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void printBinaryTree(binarynode *bnode)
{
    if (bnode == NULL){ return; }
    else
    {
        printf("Weight: %d\nCharacter: %c\n", bnode->f, bnode->ch);
        //printf("Weight: %d\nCharacter: %c\n", bnode->f, bnode->ch);
    }
}

