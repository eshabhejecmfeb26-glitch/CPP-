#include <stdio.h>

int main() {

    int x = 10, y = 20, z = 30;

    int *px = &x;
    int *py = &y;
    int *pz = &z;

    printf("Before Swap:\n");
    printf("x = %d, y = %d, z = %d\n", *px, *py, *pz);
    printf("px = %p, py = %p, pz = %p\n", px, py, pz);

    int temp = *px;
    *px = *pz;
    *pz = temp;

    printf("\nAfter Swap:\n");
    printf("x = %d, y = %d, z = %d\n", *px, *py, *pz);
    printf("px = %p, py = %p, pz = %p\n", px, py, pz);

    return 0;
}