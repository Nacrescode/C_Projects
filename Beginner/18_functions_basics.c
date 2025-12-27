
#include <stdio.h>

/*
    Function name: power
    This function calculates x to the power of n.
    x = base value
    n = power value
*/
float us(int x, int n)
{
    int i;
    float result = 1;   // result starts from 1

    // multiply x, n times
    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }

    return result;  // return the result
}

int main(void)
{
    int x, n;
    float s;

    // get base value from user
    printf("Base value: ");
    scanf("%d", &x);

    // get power value from user
    printf("Power value: ");
    scanf("%d", &n);

    // call the function
    s = us(x, n);

    // print the result
    printf("%d to the power of %d = %.2f\n", x, n, s);

    return 0;
}

/******************************************************************************/

#include <stdio.h>

/*
    Function: factor
    This function calculates factorial of a number.
*/
float factor(int k)
{
    int i;
    float f = 1;

    /* Multiply numbers from 2 to k */
    for (i = 2; i <= k; i++)
    {
        f = f * i;
    }

    return f;
}

int main(void)
{
    int n, r;
    float kom;

    /* Get n value from user */
    printf("n value: ");
    scanf("%d", &n);

    /* Get r value from user */
    printf("r value: ");
    scanf("%d", &r);

    /* Calculate combination */
    kom = factor(n) / (factor(r) * factor(n - r));

    /* Print result */
    printf("Combination = %8.0f", kom);

    return 0;
}


/******************************************************************************/



/******************************************************************************/
