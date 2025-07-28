#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;
    do
    {
        num = get_int("Height: ");

    }
    while(num < 1 || num > 8);

    for (int col = 0; col < num; col++)
    {
        for (int row = col; row < num ; row++)
        {
            printf(" ");
        }
        for (int row = col; row > 0 ; row--)
        {
            printf("#");
        }
        printf("  ");
        for (int row = col; row > 0 ; row--)
        {
            printf("#");
        }
        printf("\n");
    }



};
