#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "binarytree.h"
#include "priorityqueue.h"
#include "countfreq.h"
#include "utils.h"
#include "huffman.h"

int main()
{
    // Variables //
    FILE *input = NULL, *output = NULL; // File to read, print, and work huffman code on
    queuenode *front = NULL;

    /* Sample variables

    binarynode *b1 = createTreeNode(0, 'a');
    binarynode *b2 = createTreeNode(3, 'A');
    binarynode *b3 = createTreeNode(100, ';');

    b1->left = b2;
    b1->right = b3;

    enqueue(&front, *b1);
    enqueue(&front, *b2);
    enqueue(&front, *b3); */
    // **************** //

    printQueue(&front);

    initializeChars();
    initializeCode();
    countFile(input);
    enterToContinue();
    printFreq();
    insertCharsToQueue(&front);
    buildTree(&front);
    getTree(&front);
    printCode();
    encode();
    printQueue(&front);
}

/*for (queuenode *curr = front; curr != NULL; curr = curr->next)
{
    printf("Character: %c | Weight/Frequency: %d\n", curr->bnode->ch, curr->bnode->f);
}*/
