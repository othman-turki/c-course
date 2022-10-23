#include <stdio.h>

int main(void)
{
    // int grade[5];
    // grade[0] = 90;
    // grade[1] = 81;
    // grade[2] = 72;
    // grade[3] = 63;
    // grade[4] = 54;
    int grade[] = {90, 81, 72, 63, 54};

    int len = sizeof(grade) / sizeof(int);

    int total = 0;
    for (int i = 0; i < len; i++)
        // printf("grade[%d] = %d\n", i, grade[i]);
        total += grade[i];

    int avg = total / len;
    printf("Average: %d\n", avg);

    return 0;
}