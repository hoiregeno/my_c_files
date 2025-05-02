#include <stdio.h>

int addElements(int *nums, int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += *(nums + i);
    }

    return sum;
}

int main()
{
    // calculate sum of elements.

    int nums[] = {1, 2, 3, 4, 5};
    int len = sizeof(nums) / sizeof(nums[0]);

    int sum = addElements(nums, len);

    printf("sum = %d", sum);

    return 0;
}