#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float temp = get_float("Enter temperature: ");

    if (temp < 20.0)
    {
        printf("Cold\n");
    }
    else if (temp <= 30.0)
    {
        printf("Warm\n");
    }
    else
    {
        printf("Hot\n");
    }
}
