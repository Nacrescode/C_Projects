/*
Program Name: Pyramid Star Pattern
Description:
This program prints a pyramid made of stars (*).
Each new row adds two more stars and reduces spaces to keep the pyramid centered.
Example for n = 4:
   *
  ***
 *****
*******
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" "); 
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch(); 
}
