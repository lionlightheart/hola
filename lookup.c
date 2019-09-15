#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void lookup(int ***matriz, int nsol)
{
    int n;
    int col;
    int row;
    int cont;
    int hmax;
    
    n = 1;
    
    col = 1;
    row = 4;
    hmax = 0;
    cont = 0;
    nsol = 577;
    while(n <= nsol)
    {
        while(col < 5)
        {
            while(row > 0)
            {
                if (hmax < matriz[n][row][col])
                {
                    cont++;
                    hmax = matriz[n][row][col];
                }
                row --;
            }
            matriz[n][5][col]= cont;
            cont = 0;
            hmax =0;
            row = 4;
            col++;
        }
        col = 1;
        n++;
    }
    
    }
