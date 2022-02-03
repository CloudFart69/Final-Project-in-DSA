#ifndef PRIORITYQUEUE_H_INCLUDED
#define PRIORITYQUEUE_H_INCLUDED

typedef struct queuenode
{
    int value;
    struct queuenode *next;
}queuenode;

void enqueue(queuenode **curr, int value);
void dequeue(queuenode **curr);

#endif // PRIORITYQUEUE_H_INCLUDED
