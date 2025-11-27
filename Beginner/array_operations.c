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
