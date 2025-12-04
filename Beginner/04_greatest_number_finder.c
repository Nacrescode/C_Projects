// GREATEST NUMBER FINDER
// Finds the largest number among four user inputs

#include <stdio.h>
#include <conio.h>

int main(void)
{
    float n1, n2, n3, n4, greatest;

    printf("Enter first number: ");
    scanf("%f", &n1);

    printf("Enter second number: ");
    scanf("%f", &n2);

    printf("Enter third number: ");
    scanf("%f", &n3);

    printf("Enter fourth number: ");
    scanf("%f", &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4)
        greatest = n1;
    else if (n2 > n1 && n2 > n3 && n2 > n4)
        greatest = n2;
    else if (n3 > n1 && n3 > n2 && n3 > n4)
        greatest = n3;
    else
        greatest = n4;

    printf("The greatest number is: %f\n", greatest);

    getch();
    return 0;
}
