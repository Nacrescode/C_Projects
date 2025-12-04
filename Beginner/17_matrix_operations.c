
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

