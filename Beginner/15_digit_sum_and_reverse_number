/*
Program Name: Digit Sum and Reverse Number
Description:
This program calculates two things for a user-entered number:
1. The sum of its digits.
2. The reverse of the number.
Example for n = 257:
- Digit sum: 2 + 5 + 7 = 14
- Reverse number: 752
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
    int n, temp, k;       // n: original number, temp: copy of n, k: current digit
    int sum = 0;          // sum of digits
    int reverse = 0;      // reversed number

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n; // copy of n for processing

    while (temp > 0)
    {
        k = temp % 10;          // get last digit
        sum = sum + k;          // add digit to sum
        reverse = reverse * 10 + k; // add digit to reverse number
        temp = temp / 10;       // remove last digit
    }

    printf("Sum of digits = %d\n", sum);
    printf("Reverse number = %d\n", reverse);

    getch();
}
