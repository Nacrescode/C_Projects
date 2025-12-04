// QUADRATIC EQUATION ROOTS
// Solves the quadratic equation ax² + bx + c = 0

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    float x1, x2, discriminant;

    printf("Enter coefficient a: ");
    scanf("%d", &a);

    printf("Enter coefficient b: ");
    scanf("%d", &b);

    printf("Enter coefficient c: ");
    scanf("%d", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant == 0)
    {
        x1 = (-b) / (2 * a);
        printf("Repeated root: x = %f", x1);
    }
    else
    {
        if (discriminant > 0)
        {
            x1 = (-b - sqrt(discriminant)) / (2 * a);
            x2 = (-b + sqrt(discriminant)) / (2 * a);

            printf("First root: x1 = %f\n", x1);
            printf("Second root: x2 = %f\n", x2);
        }
        else
        {
            printf("No real roots.\n");
        }
    }

    getch();
    return 0;
}
