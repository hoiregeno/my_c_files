#include <stdio.h>
#include <math.h>

void getUserInput(float *a, float *b)
{
    printf("Enter value for 'a': ");
    scanf("%f", a);

    printf("Enter value for 'b': ");
    scanf("%f", b);
}

float getHypotenuse(float *a, float *b)
{
    return sqrt(pow(*a, 2) + pow(*b, 2));
}

int main()
{
    // initialize variables.
    float a = 0.0f, b = 0.0f, c = 0.0f;

    printf("****** HYPOTENUSE ******\n\n");

    // prompt user to enter numbers for a and b
    getUserInput(&a, &b);

    // get the result and store it to c
    c = getHypotenuse(&a, &b);

    // print the hypotenuse
    printf("\nHypotenuse: %.3f", c);

    return 0;
}