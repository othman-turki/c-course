#include <stdio.h>

int main(void)
{
    int i = 0;

    // while (i < 5)
    // {
    //     printf("i: %d\n", i);
    //     i++;
    // }

    // printf("Loop is over!\n");

    i = 0;
    // an indefinite loop, it will run indefinitely until the user enters 5
    while (i != 5)
    {
        printf("Enter 5 to quit: ");
        scanf("%d", &i);
    }

    return 0;
}