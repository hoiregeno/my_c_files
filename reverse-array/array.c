#include <stdio.h>

// Function prototypes
void printElements(int *nums, int len);
void reverseArray(int *nums, int len);

int main()
{
    // Reverse an array using pointers, no brackets allowed in reverseArray()
    int nums[] = {1, 2, 3, 4, 5};
    int len = sizeof(nums) / sizeof(nums[0]);

    // Before reversing
    printf("Before array reversed: ");
    printElements(nums, len);

    // Actually reverse the array
    reverseArray(nums, len);

    // After reversing
    printf("\nAfter array reversed: ");
    printElements(nums, len);

    return 0;
}

void printElements(int *nums, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", nums[i]); // Okay to use [] here for readability
    }
}

void reverseArray(int *nums, int len)
{
    int *start = nums;
    int *end = nums + len - 1;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}