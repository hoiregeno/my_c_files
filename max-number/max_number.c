#include <stdio.h>

void getMaxNum(int *num1, int *num2);

int main()
{
    int num1 = 1, num2 = 2;

    getMaxNum(&num1, &num2);

    return 0;
}

void getMaxNum(int *num1, int *num2)
{
    int maxNum = (*num1 > *num2) ? *num1 : *num2;

    printf("Max Number: %d", maxNum);
}