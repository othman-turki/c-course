#include <stdio.h>

// Printf placeholder structure (simplified):
//
// %[flags][width][.precision]specifier
//
// Wikipedia article gives full coverage of all possibilities (pretty
// extensive): https://w.wiki/3VtV
//

int main(void)
{
    // printf("Hello, World!\n");
    // printf("\tAnother line of text!\n");
    // printf("double quote: \" \n");
    // printf(" \\ \n");

    int x = 5;
    printf("x: %d\n", x);
    printf("%d, %d, %d \n", x, x + 1, x + 2);

    char c = 'Q';
    printf("c: %c\n", c);

    double y = 4.56;
    printf("y: %f \n", y);

    float z = 2.5;
    printf("z: %f \n", z);

    char str[] = "A string to output!\n";
    printf("str: %s", str);

    printf("|||%-10d|||\n", 5);
    printf("|||%010d|||\n", 5);

    printf("|||%8.3f|||\n", y);

    return 0;
}