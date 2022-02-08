#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "binarytree.h"
#include "priorityqueue.h"
#include "countfreq.h"
#include "utils.h"
#include "ui.h"
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

    //printQueue(&front);

    initializeChars();
    initializeCode();
    //enterToContinue();
    //printFreq();
    //insertCharsToQueue(&front);
    //buildTree(&front);
    //getTree(&front);
    //printCode();
    // printQueue(&front);
    //encode(input, output);
    //decode(&front, output);
    while(true)
    {
        switch(menu())
        {
            case 1:
            {
                    clearLine(30, RP, TP + 2);
                    gotoxy(centerText(31, RP, strlen("COMPRESSION MODE")), TP + 2);
                    printf("COMPRESSION MODE");
                    countFile(input);
                    enterToContinue();
                    printFreq();
                    insertCharsToQueue(&front);
                    buildTree(&front);
                    getTree(&front);
                    enterToContinue();
                    printCode();
                    enterToContinue();
                    clearContent();
                    printQueue(&front);
                    enterToContinue();
                    clearExtraBorders();
                    clearContent();
                    encode(input, output);
                    enterToContinue();
                    break;
            }
            case 2:
            {
                    clearLine(30, RP, TP + 2);
                    gotoxy(centerText(31, RP, strlen("DECOMPRESSION MODE")), TP + 2);
                    printf("DECOMPRESSION MODE");

                    startContent();
                    decode(&front, output);
                    enterToContinue();

                    gotoxy(LP, BP+5); break;
            }

            case 3: gotoxy(LP+40, TP+2); gotoxy(LP, BP+5);exit(0); break;

            default: printf("Please restart the program");
        }
    }
    endProgram();
    return 0;
}

/*for (queuenode *curr = front; curr != NULL; curr = curr->next)
{
    printf("Character: %c | Weight/Frequency: %d\n", curr->bnode->ch, curr->bnode->f);
}*/
