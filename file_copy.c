#include <stdio.h>
/* copy input to output; 1st version */
main()
{
    int c;

    c = getchar();
    while (c != EOF) //EOF = End Of File
    {
        putchar(c);
        c = getchar();
    }

}