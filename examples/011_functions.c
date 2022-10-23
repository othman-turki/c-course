#include <stdio.h>

// Function Declaration (Prototype)
int add(int a, int b);
int mult(int x, int y);
void print_int(int a);

int main(void)
{
    // printf("Hello, World!\n");
    // printf("Another printf statements!\n");

    int output = add(4, 5);
    // printf("Output: %d\n", output);
    print_int(output);

    int multOutput = mult(7, 9);
    // printf("Result: %d\n", multOutput);
    print_int(multOutput);

    return 0;
}

// Function Definition:
//      Function Header + Function Body
int add(int a, int b)
{
    return a + b;
}

int mult(int x, int y)
{
    int result = 0;
    for (int i = 0; i < x; i++)
        // result += add(0, y)
        result = add(result, y);

    return result;
}

void print_int(int a)
{
    printf("INT: %d\n", a);
    return;
}