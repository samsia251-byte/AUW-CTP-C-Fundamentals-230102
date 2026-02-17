#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int value[5] = {10, 20, 30, 40, 50};

    printf("Array Elements: ");


    for (int i = 0; i < 5; i++)
    {
        printf("%d ", value[i]);
    }

    printf("\n");
}
