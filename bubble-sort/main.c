#include <stdio.h>

void sortNums(int *nums, int size);

int main()
{
    int nums[] = {3, 1, 4, 2, 6, 8, 7, 9, 10, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    sortNums(nums, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}

void sortNums(int *nums, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}