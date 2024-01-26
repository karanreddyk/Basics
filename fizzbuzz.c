#include <stdio.h>
void main()
{
    for (int i = 1; i< 21; i++)
    {
        if (i % 3 == 0)
        {
            printf("Fizz");
        }
        if (i % 5 == 0)
        {
            printf("Buzz");
        }
        
        printf("\n");

    }
}