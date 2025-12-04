/*
Program Name: Reverse Number Triangle
Description:
This program prints a simple number pattern.
Each row displays numbers in descending order starting from the row number.
Example for n = 4:
  1
  2 1
  3 2 1
  4 3 2 1
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
        for (j = i; j >= 1; j--)
        {
            printf("%3d", j); 
        }
        printf("\n"); 
    }

    getch(); 
}
