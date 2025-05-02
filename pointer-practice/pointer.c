#include <stdio.h>

// function prototypes.
void eatPizza(int *pizza);

int main(void)
{
    int pizzaSlices = 8;
    int *pPizzaSlices = NULL; // assign null before reassigning to avoid accidental use of freed memory

    pPizzaSlices = &pizzaSlices; // assign the address of pizzaSlices

    eatPizza(pPizzaSlices); // pass in the pointer as an arg.

    printf("slices left: %d\n", pizzaSlices);

    return 0;
}

// pass by references
void eatPizza(int *pizza)
{
    *pizza = 0; // dereference to mutate the value.
}