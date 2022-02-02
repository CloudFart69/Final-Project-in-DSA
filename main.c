#include <stdio.h>
#include <stdlib.h>


typedef struct queuenode
{
    int value; // int muna ngayon pero later magiging treenode na yan
    struct queuenode *next;
}queuenode;

void enqueue(queuenode **curr, int value);

int x;
int y;

int main()
{
    queuenode *front = NULL;

    enqueue(&front, 0);
    enqueue(&front, 5);
    enqueue(&front, 2);

    //for (queuenode *curr = front; curr != NULL; curr = curr->next)
    //{
    //    printf("Value: %d\n", curr->value);
    //}

    printf("%d, %d", x, y);
}
