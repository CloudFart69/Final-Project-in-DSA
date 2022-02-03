#include <stdio.h>
#include <stdlib.h>

int chars[256];

// Initializing all characters to be null character
// Reason: remove unnecessary values
void initialize()
{
    for (int i = 0; i < 256 ;i++)
        chars[i] = 0;
}

// Inputs the file to the file pointer
void inputFile()
{
    char *filename = malloc(sizeof(char) * 20);
    printf("Input file to compress: ");
    scanf("%s", filename);

    //if (fp==NULL)
    //{
    //    printf("File error.\n");
    //    system("pause");
    //}


    //fp = fopen(filename,"r");
}

// Inputs the characters of the file to the ch[] and prints the file to stdout
void printFile()
{
    //int size = 0;
    //char ch;
    //while (!feof(fp))
    //{
    //    ch = fgetc(fp);
    //    chars[ch]++;
    //    putchar(ch);
   //     size++;
   // }
}

//printf("\nFile size: %d bytes.\n",size);

//printf("ASCII\tChar\tFrequency\n");
/*for (i = 0;i < 256; i++)
{
    if (chars[i] != 0)
        printf("%d\t%c\t%d\n", i, i, chars[i]);
}
*/
