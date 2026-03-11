#include <stdio.h>

int main()
{
    printf("Size of short int: %d bytes\n", sizeof(short int));
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of long int: %d bytes\n", sizeof(long int));
    printf("Size of long long int: %d bytes\n", sizeof(long long int));
    printf("Size of unsigned int: %d bytes\n", sizeof(unsigned int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Size of long double: %d bytes\n", sizeof(long double));
    printf("Size of char: %d bytes\n", sizeof(char));

    return 0;
}

/*
Answer (Example for most 64-bit systems):

1) int and unsigned int have the same size (usually 4 bytes).
2) unsigned int does NOT have a different size than int.
   They have the same size, but different value ranges.
*/