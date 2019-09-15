#include <unistd.h>

int solve(int **test, int  **sol)
{
    int n;
    int m;
    int flag;
    
    n = 1;
    m = 1;
    while ( n < 578 )
    {
        flag = 1;
        while (m <= 16)
        {
            if (sol[n][m] != test [1][m-1])
                flag = 0;
            m++;
        }
        if (flag == 1)
        {
            return(n-1);
            
        }
        m = 1;
        n++;
    }
    return (0);
}
