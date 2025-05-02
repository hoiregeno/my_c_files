#include <stdio.h>

// Take pointers so we can mutate main()’s variables
void getUserInput(float *num1, float *num2, char *op);
float getResult(float num1, float num2, char op);

int main(void)
{
    float num1, num2, result;
    char op = '\0';

    getUserInput(&num1, &num2, &op);
    result = getResult(num1, num2, op);

    printf("\nResult: %.2f\n", result);
    return 0;
}

void getUserInput(float *num1, float *num2, char *op)
{
    printf("Enter number 1: ");
    scanf("%f", num1);

    printf("Enter number 2: ");
    scanf("%f", num2);

    // initialize before the loop
    *op = '\0';
    while (*op != '+' && *op != '-' && *op != '/' && *op != '*')
    {
        printf("Enter one of these (+ - / *): ");
        scanf(" %c", op); // leading space skips leftover '\n'
    }
}

float getResult(float num1, float num2, char op)
{
    switch (op)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 == 0.0f)
        {
            fprintf(stderr, "Error: Divide by zero!\n");
            return 0.0f;
        }
        return num1 / num2;
    default:
        // should never happen
        return 0.0f;
    }
}