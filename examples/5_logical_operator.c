#include <stdio.h>

// Logical operator truth tables tell us what operands produce what value
//
// or operator
//
// X      Y      X || Y
// True   True   True
// True   False  True
// False  True   True
// False  False  False
//
//
// and operator
//
// X      Y      X && Y
// True   True   True
// True   False  False
// False  True   False
// False  False  False
//
//
// not operator
//
// X      !X
// True   False
// False  True
//

int main(void)
{
    int year = 2018;
    int price = 21000;

    // and operator example
    // if (year >= 2019 && price <= 20000)
    //     printf("OK!\n");
    // else
    //     printf("Not OK!\n");

    // or operator example (inclusive or)
    // if (year >= 2019 || price <= 20000)
    //     printf("OK!\n");
    // else
    //     printf("Not OK!\n");

    if (!(year <= 2019))
        printf("OK!\n");
    else
        printf("Not OK!\n");

    return 0;
}