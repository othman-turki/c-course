#include <stdio.h>
#include <string.h>

int main(void)
{
    // char test[5];
    // test[0] = 't';
    // test[1] = 'e';
    // test[2] = 's';
    // test[3] = 't';
    // test[4] = '\0';

    // char test[5] = "test";
    // printf("%s\n", test);

    // for (int i = 0; i < 5; i++)
    //     printf("test[%d]='%c'\n", i, test[i]);

    // char test2[] = "Some big long string!";
    // printf("test2: %s\n", test2);

    char myString[] = "Some string!!!";
    int length = strlen(myString);
    // printf("length: %d\n", length);

    int count_s = 0;

    for (int i = 0; i < length; i++)
        if (myString[i] == 's' || myString[i] == 'S')
            count_s++;

    // printf("S Count: %d\n", count_s);

    char s1[] = "My string to copy!";
    char s2[50];

    strcpy(s2, s1);
    printf("s2: %s\n", s2);

    return 0;
}