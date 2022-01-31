#include <stdio.h>
#include <stdlib.h>

/// FIRST PART ///
/// DITO ILALAGAY YUNG TREE, EACH NODE NAG COCONTAIN NG TREE ///
// Queue kuno pero linked list talaga
typedef struct queuenode
{
    int value; // int muna ngayon pero later magiging treenode na yan
    struct queuenode *next;
}queuenode;
queuenode *front = NULL;
// no need for rear dahil reversed yung pagkaka sort. basta and ending mukha siyang stack pag nag dedequeue

// We use double pointer because of parameter passing.
// Remember, when we pass an argument we either pass by value or address.
// When we pass by address and changed its dereferenced value, we also change it outside of the function.
// Think of the first pointer as the value and the second pointer as the address.
void enqueue(queuenode **curr, int value)
{
    // First node. Meaning the root (front) is empty
    if (*curr == NULL)
    {
        *curr = malloc(sizeof(queuenode));
        (*curr)->value = value;
        (*curr)->next = NULL;
    }

    else
    {
        // if the enqeueud value is greater than the current node im comparing to
        if ((*curr)->value > value)
        {
          queuenode *temp = malloc(sizeof(queuenode));
          temp->value = (*curr)->value;
          temp->next = (*curr)->next;

          (*curr)->value = value;
          (*curr)->next = temp;
        }
        else enqueue(&(*curr)->next, value);
    }
}

void dequeue(queuenode **curr){ front = (*curr)->next; }

int main(void)
{
    //for (queuenode *curr = front; curr != NULL; curr = curr->next)
    //{
    //    printf("Value: %d\n", curr->value);
    //}
}
