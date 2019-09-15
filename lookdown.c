#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void lookdown(int ***matriz, int nsol)
{
    int n;
    int col;
    int row;
    int cont;
    int hmax;
    
    n = 1;
    
    col = 1;
    row = 1;
    hmax = 0;
    cont = 0;
    nsol = 577;
    while(n <= nsol)
    {
        while(col < 5)
        {
            while(row < 5)
            {
                if (hmax < matriz[n][row][col])
                {
                    cont++;
                    hmax = matriz[n][row][col];
                }
                row ++;
            }
            matriz[n][6][col] = cont;
            cont = 0;
            hmax =0;
            row = 1;
            col++;
        }
        col = 1;
        n++;
    }
    
}
