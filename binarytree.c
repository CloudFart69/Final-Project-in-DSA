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

void printTabs(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\t");
    }
}

void printBinaryTreeRec(binarynode *bnode, int depth)
{
    if (bnode == NULL)
    {
        printTabs(depth);
        printf("empty\n");
    }
    else
    {
        printTabs(depth);
        printf("Weight: %d | ", bnode->f);
        if (bnode->ch == 0)
            printf("Character: 0\n");
        else if (bnode->ch == 32)
            printf("Character: <space>\n");
        else
            printf("Character: %c\n", bnode->ch);

        printTabs(depth);
        printf("Right\n");
        printBinaryTreeRec(bnode->right, depth + 1);

        printTabs(depth);
        printf("Left\n");
        printBinaryTreeRec(bnode->left, depth + 1);
    }
}

void printBinaryTree(binarynode *bnode)
{
    printBinaryTreeRec(bnode, 0);
}

