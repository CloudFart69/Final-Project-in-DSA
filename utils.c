#include <stdio.h>
#include <stdbool.h>

bool isFileNull(FILE *fp)
{
    if (fp == NULL)
    {
        printf("File error.\n");
        getchar();
        return true;
    }
    return false;
}

void enterToContinue()
{
    fflush(stdin);
    getchar();
}
