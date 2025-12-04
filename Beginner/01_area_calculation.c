// AREA CALCULATION
// Calculates the area of a triangle using base and height

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int base, height;
    float area;

    printf("Enter the base length: ");
    scanf("%d", &base);

    printf("Enter the height: ");
    scanf("%d", &height);

    area = (float)(base * height) / 2;
    printf("Area: %f\n", area);

    getch();
    return 0;
}
