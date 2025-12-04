/*
    This program reads numbers from the user.
    It finds the smallest and the biggest values.
    Then it prints the difference between them.
*/

#include <stdio.h>

int main()
{
    int i, n, enk, enb, rank;
    int dizi[100];   // array for numbers

    printf("Eleman sayısı: ");   // ask for count
    scanf("%d", &n);            // read count

    printf("Dizinin elemanları:\n");  // ask for elements
    for (i = 0; i < n; i++)
    {
        printf("Dizi[%d] = ", i);   // show index
        scanf("%d", &dizi[i]);      // read number
    }

    enk = dizi[0];   // start smallest
    enb = dizi[0];   // start biggest

    for (i = 0; i < n; i++)
    {
        if (dizi[i] > enb)      // check bigger
        {
            enb = dizi[i];      // update biggest
        }
        else if (dizi[i] < enk) // check smaller
        {
            enk = dizi[i];      // update smallest
        }
    }

    rank = enb - enk;   // find difference
    printf("En büyük ile en küçük arasındaki fark : %d\n", rank);

    return 0;    // end program
}

/*************************************************************************/


