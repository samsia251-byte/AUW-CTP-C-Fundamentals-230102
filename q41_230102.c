#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float value[5] = {2.5, 3.1, 4.8, 1.2, 9.6};

    printf("Float Values: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", value[i]);
    }

    printf("\n");
}
