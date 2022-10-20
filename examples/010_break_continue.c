#include <stdio.h>

int main(void)
{
    int i = 0;

    printf("loop start\n");

    while (i < 10)
    {
        i++;
        if ((i % 2) == 0)
            continue;
        printf("i: %d\n", i);
        // if (i == 5)
        //     break;
    }

    printf("loop end\n");

    return 0;
}