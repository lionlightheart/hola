
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void row1234(int ***matriz, int r1, int r2, int r3, int r4, int sol, int **matrix1234);

void matrixfull1234(int ***array, int **matrix1234)
{
    int n;
    int r1;
    int r2;
    int r3;
    int r4;
    
    n= 1;
    r1 = 1;
    r2 = 1;
    r3 = 1;
    r4 = 1;
    while(r1 < 25)
    {
        while(r2 < 25)
        {
            while (r3 < 25)
            {
                while (r4 <25)
                {
                    row1234(array,r1, r2, r3, r4, n, matrix1234);
                    n++;
                    r4++;
                }
                r4 =1;
                r3 ++;
            }
            r3 = 1;
            r2 ++;
        }
        r2 = 1;
        r1 ++;
    }
    r1 = 1;
}
