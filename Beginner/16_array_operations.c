/*
    array_sum
    Description:
        This program asks the user for the number of elements,
        reads each element into an array, and calculates the total sum.
        
*/

#include <stdio.h>

int main() {

    int i, n, sum, arr[100];  // i: loop counter, n: element count, sum: total, arr: array

    printf("Number of elements: ");   // Ask user for array size
    scanf("%d", &n);

    // Read each element from the user
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    sum = 0;  // Initialize sum

    // Add all elements
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Total = %d\n", sum);  // Print the result
}

/*******************************************************************************/
/*
    array_element
    Description:
        This program reads two integer arrays (X and Y),
        then asks the user which elements to select from each array,
        and prints the sum of those selected elements.
        
*/

#include <stdio.h>

int main() {

    int i, n, a, b, sum, x[100], y[100];  // Arrays and indices

    printf("Number of elements for arrays X and Y: ");
    scanf("%d", &n);

    // Read elements for both arrays
    for (i = 0; i < n; i++) {
        printf("X array element [%d]: ", i);
        scanf("%d", &x[i]);

        printf("Y array element [%d]: ", i);
        scanf("%d", &y[i]);
    }

    // Ask which elements to sum
    printf("Which element of array X? ");
    scanf("%d", &a);

    printf("Which element of array Y? ");
    scanf("%d", &b);

    sum = x[a] + y[b];  // Correct summation

    printf("Sum = %d\n", sum);
}

/*******************************************************************************/
/*
    vector_scalar_product
    Description:
        This program reads two N-dimensional vectors (A and B)
        from the user and calculates their scalar (dot) product.
        
*/

#include <stdio.h>

int main() {

    int i, n, scalar, A[100], B[100];

    printf("Number of elements (N): ");
    scanf("%d", &n);

    // Read elements of vector A
    for (i = 0; i < n; i++) {
        printf("A vector element [%d]: ", i);
        scanf("%d", &A[i]);
    }

    // Read elements of vector B
    for (i = 0; i < n; i++) {
        printf("B vector element [%d]: ", i);
        scanf("%d", &B[i]);
    }

    scalar = 0;  // initialize sum

    // Calculate scalar (dot) product
    for (i = 0; i < n; i++) {
        scalar = scalar + (A[i] * B[i]);
    }

    printf("Scalar Product = %d\n", scalar);
}

/*******************************************************************************/

/*
    find_min
    Description:
        This program reads N elements into an array,
        finds the smallest element and its index,
        and prints both. 
*/

#include <stdio.h>

int main() {

    int i, n, index, min, arr[100];  // i: loop counter, n: element count, index: position of min, min: minimum value, arr: array

    printf("Number of elements in the array: ");
    scanf("%d", &n);

    // Read elements from the user
    for(i = 0; i < n; i++) {
        printf("Array[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Initialize min and its index
    min = arr[0];
    index = 0;

    // Find the smallest element
    for(i = 0; i < n; i++) {
        if(min > arr[i]) {
            min = arr[i];
            index = i;
        }
    }

    printf("Smallest element = %d\n", arr[index]);  // Print the minimum
    printf("Index = %d\n", index);                 // Print its position
}

/*******************************************************************************/

/*
    array_average
    Description:
        This program reads N elements into an array,
        calculates the average of all elements,
        and also calculates the average of positive elements only.
        
*/

#include <stdio.h>

int main() {

    int i, n, count_positive;          // i: loop counter, n: number of elements, count_positive: counter for positive numbers
    double sum_all, sum_positive;      // sum_all: sum of all elements, sum_positive: sum of positive elements
    double arr[100];                    // array to store elements

    printf("Number of elements: ");
    scanf("%d", &n);

    // Read elements from user
    for(i = 0; i < n; i++) {
        printf("Element[%d]: ", i);
        scanf("%lf", &arr[i]);
    }

    sum_all = 0;
    sum_positive = 0;
    count_positive = 0;

    // Calculate sums
    for(i = 0; i < n; i++) {
        sum_all += arr[i];             // Add to total sum
        if(arr[i] > 0) {               // Check if positive
            sum_positive += arr[i];    // Add to positive sum
            count_positive++;          // Increment positive counter
        }
    }

    printf("Average of all elements = %.2lf\n", sum_all / n); // Average of all
    if(count_positive > 0) {
        printf("Average of positive elements = %.2lf\n", sum_positive / count_positive); // Average of positives
    } else {
        printf("No positive elements to calculate average.\n");
    }
}

/*******************************************************************************/

/*
    above_average_count
    Description:
        This program reads N positive elements into an array,
        calculates the average of all elements,
        counts how many elements are above the average,
        and prints those elements one by one.
*/

#include <stdio.h>

int main() {

    int i, n;                   // i: loop counter, n: number of elements
    int count_above = 0;        // Counter for numbers above average
    double sum, average;        // sum: total sum, average: average value
    double arr[100];            // array to store elements

    printf("Number of elements: ");
    scanf("%d", &n);

    // Read elements from user
    for(i = 0; i < n; i++) {
        printf("Element[%d]: ", i);
        scanf("%lf", &arr[i]);
    }

    sum = 0;

    // Calculate total sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    average = sum / n;  // Calculate average

    // Count elements above average
    for(i = 0; i < n; i++) {
        if(arr[i] > average) {
            count_above++;
        }
    }

    // Print results
    printf("Average = %.2lf\n", average);
    printf("Number of elements above average = %d\n", count_above);
    printf("Elements above average:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] > average) {
            printf("%.2lf\n", arr[i]);
        }
    }
}

/******************************************************************************/

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

