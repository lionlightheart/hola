#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void order(int ***array, int **sol, int nsol)
{
    int n;
    int i;
    
    n = 1;
    i = 1;
    while (n <= nsol)
    {
        while(i<5)
        {
            
            sol[n][i+8]=array[n][i][0];
            sol[n][i+12]=array[n][i][5];
            sol[n][i]=array[n][6][i];
            sol[n][i+4]=array[n][5][i];
            
            
            i++;
        }
        i =1 ;
        
        n++;
    }
    
}
