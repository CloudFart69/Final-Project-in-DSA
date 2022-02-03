#include <stdio.h>
#include <stdbool.h>

bool isfilenull(FILE *fp)
{
    if (fp == NULL)
    {
        printf("File error.\n");
        system("pause");
    }
    return true;
}
