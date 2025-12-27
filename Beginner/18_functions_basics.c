
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

#include <stdio.h>

/*
    Program Name: Exponential Calculation
    Description:
    This program calculates e power x
    using series expansion and functions.
*/

/*
    Function Name: factorial
    Description:
    This function calculates factorial of a number.
*/
float factorial(int k)
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

/*
    Function Name: power
    Description:
    This function calculates x power n.
*/
float power(int x, int n)
{
    int i;
    float f = 1;

    /* Multiply x, n times */
    for (i = 1; i <= n; i++)
    {
        f = f * x;
    }

    return f;
}

int main(void)
{
    int i, n, x;
    float e;

    /* Get n value */
    printf("n value: ");
    scanf("%d", &n);

    /* Get x value */
    printf("x value: ");
    scanf("%d", &x);

    e = 1;

    /* Calculate e power x using series */
    for (i = 1; i <= n; i++)
    {
        e = e + power(x, i) / factorial(i);
    }

    /* Print result */
    printf("e power %d = %f", x, e);

    return 0;
}



/******************************************************************************/

#include <stdio.h>

/*
    Program Name: Cosine Calculation
    Description:
    This program calculates cosine(x)
    using functions, loop and series.
*/

/*
    Function Name: power
    Description:
    This function calculates x to the power n.
*/
float power(int x, int n)
{
    int i;
    float result = 1;

    /* Multiply x, n times */
    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }

    return result;
}

/*
    Function Name: factorial
    Description:
    This function calculates factorial of n.
*/
float factorial(int n)
{
    int i;
    float result = 1;

    /* Multiply numbers from 1 to n */
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}

int main(void)
{
    int i, n, x, sign;
    float cosine;

    /* Get N value */
    printf("Enter N value: ");
    scanf("%d", &n);

    /* Get X value */
    printf("Enter X value: ");
    scanf("%d", &x);

    cosine = 1.0;
    sign = -1;
    i = 2;

    /* Calculate cosine series */
    while (i <= 2 * n)
    {
        cosine = cosine + sign * power(x, i) / factorial(i);
        sign = sign * (-1);
        i = i + 2;
    }

    /* Print result */
    printf("Cosine(%d) = %f", x, cosine);

    return 0;
}
