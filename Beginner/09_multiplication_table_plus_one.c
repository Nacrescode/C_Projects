/******************************************************************************
 * PROGRAM: MULTIPLICATION TABLE PLUS ONE
 * DESCRIPTION:
 * This program prints a 5x5 multiplication table where each value is the product 
 * of row and column numbers plus one.
 *
 * HOW IT WORKS:
 * 1. Two nested loops are used: outer loop for rows, inner loop for columns.
 * 2. For each cell, it calculates (row * column) + 1 and prints it.
 * 3. After each row, a new line is printed.
 *
 * EXAMPLE OUTPUT:
 * 2   3   4   5   6
 * 3   5   7   9  11
 * 4   7  10  13  16
 * 5   9  13  17  21
 * 6  11  16  21  26
 *
 * VARIABLES:
 * - i: row counter
 * - j: column counter
 *******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    int i, j; // Declare row and column counters

    // Outer loop for rows
    for (i = 1; i <= 5; i++)
    {
        // Inner loop for columns
        for (j = 1; j <= 5; j++)
        {
            printf("%5d", i * j + 1); // Print value +1 with spacing
        }
        printf("\n"); // New line after each row
    }

    getch(); // Wait for a key press before closing
}
