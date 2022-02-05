#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "utils.h"

int chars[256];
int size = 0;
char ch;

// Initializing all characters to be null character
// Reason: remove unnecessary values
void initializeChars()
{
    for (int i = 0; i < 256 ;i++)
        chars[i] = 0;
}

// Inputs the file to the file pointer
void inputFile(FILE *fp)
{
    char *filename = malloc(sizeof(char) * 20);
    printf("Input file to compress: ");
    scanf("%s", filename);

    fp = fopen(filename,"r");

    if (isFileNull(fp)){ return; }
    while (!feof(fp))
    {
        ch = fgetc(fp);
        chars[(int) ch]++;
        putchar(ch);
        size++;
    }
}

// Inputs the characters of the file to the ch[] and prints the file to stdout
void printFreq()
{
    printf("\nFile size: %d bytes.\n", size);
    printf("ASCII\tChar\tFrequency\n");
    for (int i = 0; i < 256; i++)
    {
        if (chars[i] != 0)
            printf("%d\t%c\t%d\n", i, i, chars[i]);
    }
}


