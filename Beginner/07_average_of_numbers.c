/******************************************************************************
 * PROGRAM: AVERAGE OF NUMBERS
 * DESCRIPTION:
 * This program calculates the average of a set of numbers entered by the user.
 *
 * HOW IT WORKS:
 * 1. The user enters how many numbers they want to input (n).
 * 2. The program asks for each number and adds them together.
 * 3. It divides the total by n to find the average.
 * 4. Finally, it displays the average.
 *
 * EXAMPLE:
 * Input: n = 3 → numbers = 4, 6, 8
 * Output: Average = 6.000000
 *
 * VARIABLES:
 * - i: loop counter
 * - n: how many numbers to input
 * - number: each number entered by the user
 * - total: sum of all numbers
 * - average: the calculated mean value

 *******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <math.h>

/**
 * main - Entry point of the program
 * 
 * Returns: 0 after successful execution
 */
int main(void)
{
    int i, n, number, total;  // Declare integer variables
    float average;            // Declare variable for average value

    total = 0; // Initialize total to 0

    printf("How many numbers will you enter? : ");
    scanf("%d", &n);

    // Loop to read numbers and calculate total
    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        total = total + number;
    }

    // Calculate average
    average = (float)total / n;

    // Display the result
    printf("Average = %f", average);

    getch(); // Wait for a key press before closing
}
