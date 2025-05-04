#include <stdio.h>

void reverseArray(int *arr, int len);
void printArray(const int *arr, int len);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    // before reverse
    printf("Before:\n");
    printArray(arr, len);

    // reverse array
    reverseArray(arr, len);

    // after reverse
    printf("\n\nAfter:\n");
    printArray(arr, len);

    return 0;
}

void reverseArray(int *arr, int len)
{
    // initialize pointers
    int *start = arr;         // points to the first element of the array.
    int *end = arr + len - 1; // points to the last element of the array.

    while (start < end)
    {
        // swap elements pointed to by start and end.
        int temp = *start;
        *start = *end;
        *end = temp;

        start++; // move forward
        end--;   // move backward
    }
}

// Precede int array with const if not mutating anything
void printArray(const int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}