#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter number of rows: ");

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");                    
    }
}
