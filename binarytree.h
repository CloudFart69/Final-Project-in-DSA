#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED

typedef struct binarytree
{
    int f;
    char ch;
    struct binarytree *left, *right;
}binarytree;

binarytree *createTreeNode(int f, char ch);


#endif // BINARYTREE_H_INCLUDED
