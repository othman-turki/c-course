#include <stdio.h>

int main(void)
{
    int pos = 10;
    int x, y, z;
    x = 2;
    y = 3;
    z = 4;

    float mynum = 98.125678;
    double mydbl = 98.125678;

    char c = 'Y';

    printf("pos: %d\n", pos);
    printf("x: %d, y: %d, z: %d\n", x, y, z);
    printf("mynum: %f\n", mynum);
    printf("mydbl: %lf\n", mydbl);
    printf("c: %c\n", c);
    // printf("a: %c\n", 97); // output: a

    x = 10;
    y = 20;
    z = 30;

    printf("x: %d, y: %d, z: %d\n", x, y, z);

    // char a = 128;      // range: -128 to 127
    // printf("%d\n", a); // output: -128

    // printf("%lu\n", sizeof(int));    // output: 4
    // printf("%lu\n", sizeof(float));  // output: 4
    // printf("%lu\n", sizeof(double)); // output: 8
    // printf("%lu\n", sizeof(char));   // output: 1

    return 0;
}
