/******************************************************************************
 * PROGRAM: MULTIPLICATION USING ADDITION
 * DESCRIPTION:
 * This program multiplies two numbers (a and b) without using the * operator.
 * It uses a loop to add 'b' to the result 'a' times.
 *
 * HOW IT WORKS:
 * 1. The user enters two numbers: a and b.
 * 2. The program uses a for loop to add 'b' repeatedly 'a' times.
 * 3. The final result is displayed on the screen.
 *
 * EXAMPLE:
 * Input: a = 3, b = 4
 * Output: Result = 12
 *
 * VARIABLES:
 * - i: loop counter
 * - a: first number (times to add)
 * - b: second number (to be added)
 * - result: stores the multiplication result
 *******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    float i, a, b, result; // Declare variables

    printf("Enter the first number (a): ");
    scanf("%f", &a);

    printf("Enter the second number (b): ");
    scanf("%f", &b);

    result = 0; // Initialize result to 0

    // Loop to add 'b' repeatedly 'a' times
    for (i = 1; i <= a; i++)
    {
        result = result + b;
    }

    // Display the result
    printf("Result = %f", result);

    getch(); // Wait for a key press before closing
}
