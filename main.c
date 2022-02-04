#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "binarytree.h"
#include "priorityqueue.h"
#include "countfreq.h"
#include "utils.h"

int main()
{
    // Variables //
    FILE *fp = NULL; // File to read, print, and work huffman code on



    /*queuenode *front = NULL;

    enqueue(&front, 0);
    enqueue(&front, 5);
    enqueue(&front, 2);*/


    initialize();
    inputFile(fp);
    enterToContinue();
    printFreq();
}
