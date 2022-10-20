#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // int num = 3;

    // switch (num)
    // {
    // case 1:
    //     printf("Case 1!\n");
    //     if (1 == 1)
    //         printf("if!\n");
    //     break;
    // case 2:
    //     printf("Case 2!\n");
    //     break;
    // default:
    //     printf("Default switch case!\n");
    // }

    // printf("Below switch statement!\n");

    // "Practical" example of using fall-through logic to count the number of As
    // and vowels in a string (case insensitive)
    char s[] = "aabAdefghIjKlMNoPqRsTU";
    int length = strlen(s); // <string.h>
    int a = 0;
    int vowel = 0;

    for (int i = 0; i < length; i++)
    {
        switch (toupper(s[i])) // <ctype.h>
        {
        case 'A':
            a++;
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vowel++;
        }
    }

    printf("a: %d, vowel: %d\n", a, vowel);

    return 0;
}