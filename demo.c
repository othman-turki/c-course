#include <stdio.h>

int main(void)
{
    FILE *fh_output;

    fh_output = fopen("io.txt", "w");

    fclose(fh_output);

    return 0;
}