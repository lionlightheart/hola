#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void lookright(int ***matriz, int nsol)
{
    int n;
    int col;
    int row;
    int cont;
    int hmax;
    
    n = 1;
    
    col = 4;
    row = 1;
    hmax = 0;
    cont = 0;
    nsol = 577;
    while(n <= nsol)
    {
        while(row < 5)
        {
            while(col > 0)
            {
                if (hmax < matriz[n][row][col])
                {
                    cont++;
                    hmax = matriz[n][row][col];
                }
                col --;
            }
            matriz[n][row][5]= cont;
            cont = 0;
            hmax =0;
            col = 4;
            row++;
        }
        row = 1;
        n++;
    }
}
