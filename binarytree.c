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
/*void printBinaryTree(binarynode *bnode)
{

}*/

void printBinaryTree(binarynode *bnode)
{
    if (bnode == NULL)
    {
        printf("\nempty");
    }
    else
    {
        printf("\n\tWeight: %d\n", bnode->f);
        printf("\tCharacter: %c\n", bnode->ch);

        printf("Right");
        printBinaryTree(bnode->right);
        printf("Left");
        printBinaryTree(bnode->left);
        printf("done\n");
    }
}

