
/*
    Find Max in Matrix
    Description:
    This program reads a matrix from the user.
    It finds the largest number in the matrix.
    It prints the matrix, the largest number, and its row and column.
*/

#include <stdio.h>

int main(void)
{
    int r, c, rows, cols;
    int maxVal, maxRow, maxCol;
    int mat[10][10];   // matrix with max size 10x10
    int scanRes;

    // ask for matrix size
    printf("Number of rows (1..10): ");
    scanRes = scanf("%d", &rows);
    if (scanRes != 1) return 1;

    printf("Number of columns (1..10): ");
    scanRes = scanf("%d", &cols);
    if (scanRes != 1) return 1;

    // check valid size
    if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Invalid size. Use 1..10 for rows and columns.\n");
        return 1;
    }

    // read matrix elements
    for (r = 0; r < rows; r++)
    {
        for (c = 0; c < cols; c++)
        {
            printf("Mat[%d, %d] = ", r, c);   // ask for element
            if (scanf("%d", &mat[r][c]) != 1)
                return 1;
        }
    }

    // start with first element as max
    maxVal = mat[0][0];
    maxRow = 0;
    maxCol = 0;

    // find maximum and its position
    for (r = 0; r < rows; r++)
    {
        for (c = 0; c < cols; c++)
        {
            int val = mat[r][c];          // current value
            if (val > maxVal)            // if current is bigger
            {
                maxVal = val;            // update max value
                maxRow = r;              // update row index
                maxCol = c;              // update column index
            }
        }
    }

    // print matrix
    printf("Matrix:\n");
    for (r = 0; r < rows; r++)
    {
        for (c = 0; c < cols; c++)
        {
            printf("%10d", mat[r][c]);   // print element
        }
        printf("\n");                    // new line after each row
    }

    // print results
    printf("Largest number: %d\n", maxVal);
    printf("Found at row: %d\n", maxRow);
    printf("Found at column: %d\n", maxCol);

    return 0;   // end program
}

/******************************************************************************/

/* 
   This program reads an MxN matrix,
   finds all positive numbers,
   calculates the average of them,
   and prints the matrix and the result.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, m, n;
    int mat[10][10];      // matrix up to 10x10
    int ptotal, pcount;   // sum of positive numbers and count of positives
    float avg;            // average value

    printf("Row count: ");     // ask number of rows
    scanf("%d", &m);

    printf("Column count: ");  // ask number of columns
    scanf("%d", &n);

    /* read matrix values */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Matrix[%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    ptotal = 0;   // start total at 0
    pcount = 0;   // start count at 0

    /* scan matrix and find positive values */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (mat[i][j] > 0)     // check if number is positive
            {
                ptotal = ptotal + mat[i][j];   // add to total
                pcount = pcount + 1;           // increase count
            }
        }
    }

    avg = (float) ptotal / pcount;  // calculate average

    /* print matrix */
    printf("\nMatrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%6d", mat[i][j]);
        }
        printf("\n");
    }

    /* print result */
    printf("\nAverage of positive numbers: %8.3f\n", avg);

    return 0;
}

/******************************************************************************/
/* 
   This program reads two MxN matrices (A and B),
   adds them element by element,
   and creates matrix C where C[i][j] = A[i][j] + B[i][j].
   Finally it prints matrix C.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, m, n;
    int A[10][10];   // first matrix
    int B[10][10];   // second matrix
    int C[10][10];   // result matrix

    printf("Row count: ");       // read number of rows
    scanf("%d", &m);

    printf("Column count: ");    // read number of columns
    scanf("%d", &n);

    /* read matrix A */
    printf("\nEnter Matrix A values:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d,%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    /* read matrix B */
    printf("\nEnter Matrix B values:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("B[%d,%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    /* compute C = A + B */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];   // element-wise sum
        }
    }

    /* print matrix C */
    printf("\nMatrix C (A + B)\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%6d", C[i][j]);       // print with 6-space format
        }
        printf("\n");
    }

    return 0;
}

/******************************************************************************/

/* 
   This program creates an identity matrix.
   User enters the size N and the program fills
   matrix[i][j] = 1 when i == j, else 0.
   Then it prints the matrix.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n;
    int matrix[10][10];   // identity matrix up to 10x10

    printf("Matrix size: ");  // read N
    scanf("%d", &n);

    /* fill identity matrix */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)          // diagonal element
            {
                matrix[i][j] = 1;
            }
            else                 // non-diagonal
            {
                matrix[i][j] = 0;
            }
        }
    }

    /* print matrix */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", matrix[i][j]);   // print with 4-space padding
        }
        printf("\n");
    }

    return 0;
}

