#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "utils.h"
#include "files.h"

int chars[256] = {0};
int size = 0;
char *filename;

void initializeChars()
{
    for (int i = 0; i < 256; i++)
        chars[i]=0;
}
// Inputs the file to the file pointer
void countFile(FILE *fp)
{
    char ch;
    filename = malloc(sizeof(char) * 20);
    printf("Input file to compress: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (isFileNull(fp)){ return; }
    while (!feof(fp))
    {
        ch = fgetc(fp);
        if ((int) ch != 0)
        {
            chars[(int) ch]++;
            size++;
        }
    }
    fclose(fp);
    printFile(fp);
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


