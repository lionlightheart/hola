#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void filter(int ***matini, int ***matsol, int nsol)
{
    int n;
    int rows;
    int colum;
    int c;
    int flag;
    int ro;
    int co;
    int m;
    
    colum = 1;
    rows = 1;
    n = 1;
    c = 1;
    m = 1;
    flag = 0;
    while (n < 331777)
    {
        if (
            (matini[n][1][1] != matini[n][2][1]) &&
            (matini[n][1][1] != matini[n][3][1]) &&
            (matini[n][1][1] != matini[n][4][1]) &&
            (matini[n][2][1] != matini[n][3][1]) &&
            (matini[n][2][1] != matini[n][4][1]) &&
            (matini[n][3][1] != matini[n][4][1]) &&
            (matini[n][1][2] != matini[n][2][2]) &&
            (matini[n][1][2] != matini[n][3][2]) &&
            (matini[n][1][2] != matini[n][4][2]) &&
            (matini[n][2][2] != matini[n][3][2]) &&
            (matini[n][2][2] != matini[n][4][2]) &&
            (matini[n][3][2] != matini[n][4][2]) &&
            (matini[n][1][3] != matini[n][2][3]) &&
            (matini[n][1][3] != matini[n][3][3]) &&
            (matini[n][1][3] != matini[n][4][3]) &&
            (matini[n][2][3] != matini[n][3][3]) &&
            (matini[n][2][3] != matini[n][4][3]) &&
            (matini[n][3][3] != matini[n][4][3]) &&
            (matini[n][1][4] != matini[n][2][4]) &&
            (matini[n][1][4] != matini[n][3][4]) &&
            (matini[n][1][4] != matini[n][4][4]) &&
            (matini[n][2][4] != matini[n][3][4]) &&
            (matini[n][2][4] != matini[n][4][4]) &&
            (matini[n][3][4] != matini[n][4][4])
            )
        {
            c++;
            flag = 1;
        }
        
        if (flag == 1)
        {
            ro = 1;
            co = 1;
            while (ro < 5)
            {
                while (co < 5)
                {
                    matsol[m][ro][co] = matini[n][ro][co];
                    co++;
                }
                ro++;
                co = 1;
            }
            m++;
        }
        flag =0;
        n++;
    }
    nsol = m;
    
}
