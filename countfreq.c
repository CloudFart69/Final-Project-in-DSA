#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "utils.h"
#include "files.h"
#include "ui.h"

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

    do
    {
        clearContent();
        gotoxy(LP + 40, TP + 7);
        printf("Input file to compress: ");

        gotoxy(LP + 40, TP + 8);
        scanf("%s", filename);

        gotoxy(LP + 40, TP + 9);
        printf("You typed: %s", filename);

        gotoxy(LP, BP + 5);
        enterToContinue();
        clearContent();
        fp = fopen(filename, "r");
    }while(isFileNull(fp));
    startContent();
    printFile(fp);
    rewind(fp);
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
}

// Inputs the characters of the file to the ch[] and prints the file to stdout
void printFreq()
{
    int y = 0;
    clearContent();
    gotoxy(LP + 40, TP + 7);
    printf("File size: %d bytes. ", size);
    gotoxy(LP + 40, TP + 8);
    printf("ASCII\tChar\tFrequency\n");
    for (int i = 0; i < 256; i++)
    {
        if (chars[i] != 0)
        {
            y++;
            gotoxy(LP + 40, TP + 9 + y);
            printf("%d\t%c\t%d\n", i, i, chars[i]);
        }
    }
}


