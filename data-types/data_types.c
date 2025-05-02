#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num = 21;
    char letter = 'H';
    char name[] = "Geno";
    double price = 3.14159265358979;
    float height = 3.14159265358979;
    bool isStudent = 1; // 1 is true, 2 is false

    printf("number: %d\n", num);
    printf("letter: %c\n", letter);
    printf("name: \t%s\n", name);
    printf("price: \t%lf\n", price);
    printf("height: %f\n", height);
    printf("Student: %s\n", (isStudent) ? "True" : "False");

    return 0;
}