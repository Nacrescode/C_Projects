// PERIMETER CALCULATION
// Calculates the perimeter of a rectangle using two sides

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float side1, side2, perimeter;

    printf("Enter side 1 length: ");
    scanf("%f", &side1);

    printf("Enter side 2 length: ");
    scanf("%f", &side2);

    perimeter = 2 * side1 + 2 * side2;
    printf("Perimeter: %f\n", perimeter);

    getch();
    return 0;
}
