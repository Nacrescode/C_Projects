/*
    Find Min–Max Difference
    Description:
    This program reads numbers from the user.
    It finds the smallest and biggest values.
    Then it prints the difference between them.
*/

#include <stdio.h>

int main()
{
    int i, count, minVal, maxVal, diff;
    int arr[100];    // array for numbers

    printf("Number of elements: ");   // ask for count
    scanf("%d", &count);              // read count

    printf("Enter the elements:\n");  // ask for elements
    for(i = 0; i < count; i++)
    {
        printf("arr[%d] = ", i);      // show index
        scanf("%d", &arr[i]);         // read number
    }

    minVal = arr[0];   // start smallest
    maxVal = arr[0];   // start biggest

    for(i = 0; i < count; i++)
    {
        if(arr[i] > maxVal)           // check bigger
        {
            maxVal = arr[i];          // update max
        }
        else if(arr[i] < minVal)      // check smaller
        {
            minVal = arr[i];          // update min
        }
    }

    diff = maxVal - minVal;           // find difference
    printf("Difference between biggest and smallest: %d\n", diff);

    return 0;    // end program
}

/******************************************************************************/

/*
    Odd–Even Sum and Average
    Description:
    
    This program reads numbers from the user.
    It finds the sum and average of odd numbers.
    It also finds the sum and average of even numbers.
*/

#include <stdio.h>

int main()
{
    int i, count, oddSum, oddCount, evenSum, evenCount, arr[100];
    float oddAvg, evenAvg;

    printf("Number of elements: ");   // ask for count
    scanf("%d", &count);              // read count

    printf("Enter the elements:\n");  // ask for elements
    for(i = 0; i < count; i++)
    {
        printf("arr[%d] = ", i);      // show index
        scanf("%d", &arr[i]);         // read number
    }

    oddSum = 0;        // sum of odd
    evenSum = 0;       // sum of even
    oddCount = 0;      // count of odd
    evenCount = 0;     // count of even

    for(i = 0; i < count; i++)
    {
        if(arr[i] % 2 == 1)           // check odd
        {
            oddSum += arr[i];         // add odd number
            oddCount++;               // increase odd count
        }
        else                          // even number
        {
            evenSum += arr[i];        // add even number
            evenCount++;              // increase even count
        }
    }

    oddAvg = (float) oddSum / oddCount;     // odd avg
    evenAvg = (float) evenSum / evenCount;  // even avg

    printf("Odd sum: %d\n", oddSum);          // print odd sum
    printf("Odd average: %.2f\n", oddAvg);    // print odd avg
    printf("Even sum: %d\n", evenSum);        // print even sum
    printf("Even average: %.2f\n", evenAvg);  // print even avg

    return 0;   // end program
}

/******************************************************************************/
/*
    Cumulative Sum Array
    Description:
    
    This program reads numbers from the user.
    It makes a new array with cumulative sum.
    Each new element is: previous sum + current number.
*/

#include <stdio.h>

int main()
{
    int i, count, arr[100], sumArr[100];

    printf("Number of elements: ");   // ask for count
    scanf("%d", &count);              // read count

    for(i = 0; i < count; i++)
    {
        printf("arr[%d] = ", i);      // show index
        scanf("%d", &arr[i]);         // read number
        sumArr[i] = 0;                // set to zero first
    }

    sumArr[0] = arr[0];               // first value

    for(i = 1; i < count; i++)
    {
        sumArr[i] = sumArr[i - 1] + arr[i];   // cumulative sum
    }

    for(i = 0; i < count; i++)
    {
        printf("%4d %4d\n", arr[i], sumArr[i]);   // print arrays
    }

    return 0;   // end program
}

/******************************************************************************/

/*
    Mean–Variance–Standard Deviation Calculation
    Description:
    
    This program reads integer numbers from the user.
    It calculates the mean (average), variance and standard deviation.
    All text and variable names use very simple English.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, count;
    int data[100];               // store input numbers
    double sum;                  // sum of numbers
    double mean;                 // average
    double varSum;               // sum of squared differences
    double variance;             // variance
    double stddev;               // standard deviation

    printf("Number of elements: ");   // ask for count
    if (scanf("%d", &count) != 1)     // read count
        return 1;                     // end if bad input

    if (count <= 0 || count > 100)   // check valid count
    {
        printf("Invalid count (must be 1..100)\n");
        return 1;
    }

    printf("Enter the elements:\n");   // ask for elements
    for (i = 0; i < count; i++)
    {
        printf("data[%d] = ", i);      // show index
        if (scanf("%d", &data[i]) != 1)
            return 1;                  // end if bad input
    }

    sum = 0.0;                         // start sum at zero
    for (i = 0; i < count; i++)
    {
        sum += data[i];                // add each number
    }

    mean = sum / (double) count;       // compute mean

    varSum = 0.0;                      // start variance sum at zero
    for (i = 0; i < count; i++)
    {
        double diff = data[i] - mean;  // difference from mean
        varSum += diff * diff;         // add squared difference
    }

    variance = varSum / (double) count;   // population variance
    stddev = sqrt(variance);              // standard deviation

    printf("Mean (average): %.4f\n", mean);        // print mean
    printf("Variance: %.4f\n", variance);         // print variance
    printf("Standard deviation: %.4f\n", stddev); // print std deviation

    return 0;   // end program
}

/******************************************************************************/

/*
    Find Closest Number to X
    Description:
    This program reads numbers from the user.
    Then it reads a target number X.
    It finds the number in the array that is closest to X.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, count, xValue;
    int nearestDiff;        // smallest difference
    int nearestNum;         // number closest to X
    int arr[100];           // array for numbers

    printf("Number of elements: ");      // ask for count
    if (scanf("%d", &count) != 1)        // read count
        return 1;                        // stop if invalid input

    for(i = 0; i < count; i++)
    {
        printf("arr[%d] = ", i);         // show index
        scanf("%d", &arr[i]);            // read an element
    }

    printf("Enter X: ");                 // ask for target X
    scanf("%d", &xValue);                // read X

    nearestDiff = abs(arr[0] - xValue);  // start difference
    nearestNum  = arr[0];                // start closest number

    for(i = 1; i < count; i++)
    {
        int diff = abs(arr[i] - xValue); // find difference

        if(diff < nearestDiff)           // check smaller difference
        {
            nearestDiff = diff;          // update difference
            nearestNum  = arr[i];        // update closest number
        }
    }

    printf("Closest number to %d is %d\n", xValue, nearestNum);   // print result

    return 0;    // end program
}

