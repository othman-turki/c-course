#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
            continue;
        printf("i: %d\n", i);
        // if (i == 2) break;
    }
    printf("\n");

    // Simulate infinite loop with for
    // int x = 0;
    // for (;;)
    // {
    //     printf("Enter 5 to quit: ");
    //     scanf("%d", &x);
    //     if (x == 5)
    //         break;
    // }

    //

    return 0;
}