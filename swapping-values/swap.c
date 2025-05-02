#include <stdio.h>

void swapValues(int *x, int *y);

int main()
{
    int x = 1, y = 2;

    swapValues(&x, &y);

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}

void swapValues(int *x, int *y)
{
    int temp = 0;

    temp = *x;
    *x = *y;
    *y = temp;
}