#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **code;
    int depth = 5;
    *code = malloc(sizeof(char) * depth);
    *code[0] = 1;
    *code[1] = 2;
    *code[2] = 3;
    *code[3] = 4;
    *code[4] = 5;
    *code[5] = 6;

    for (int i = 0; i < depth; i++)
    {
        printf("code[%d] is %d\n", i, *code[i]);
    }
}
