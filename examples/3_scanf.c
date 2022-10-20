#include <stdio.h>

int main(void)
{
    // int value input
    // int n = 0;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // printf("n: %d\n", &n);

    // char value input
    // char n = 'a';
    // printf("Enter a char: ");
    // scanf("%c", &n);
    // printf("n: %c\n", n);

    // float value input
    // float n = 0;
    // printf("Enter a float: ");
    // scanf("%f", &n);
    // printf("n: %f\n", n);

    // double value input
    // double n = 0;
    // printf("Enter a double: ");
    // scanf("%lf", &n);
    // printf("n: %f\n", n);

    // scanf can be used to accept multiple values at once
    // int n1, n2, n3;
    // n1 = n2 = n3 = 0;
    // printf("Enter n1 n2 n3: ");
    // scanf("%d %d %d", &n1, &n2, &n3);
    // printf("sum: %d\n", n1 + n2 + n3);

    // accepts a string as input - but stops at the first space!
    char buffer[50];
    printf("Enter a string: ");
    scanf("%s", buffer);
    printf("string entered: %s\n", buffer);

    return 0;
}
