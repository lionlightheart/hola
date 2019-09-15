#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void row1234(int ***matriz, int r1, int r2, int r3, int r4, int sol, int **matriz1234)
{
    int i;
    
    i = 1;
    while (i < 5)
    {
        matriz[sol][1][i] = matriz1234[r1][i];
        matriz[sol][2][i] = matriz1234[r2][i];
        matriz[sol][3][i] = matriz1234[r3][i];
        matriz[sol][4][i] = matriz1234[r4][i];
        i++;
    }
}
