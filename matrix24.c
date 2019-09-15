
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	matrix24(int **matrix)
{
	int i;
	int j;
	int k;
	int m;
	int punt;

	punt =1;
	i=1;
	j=1;
	k=1;
	m=1;
	while (i < 5)
	{
		while(j <5)
		{
			while (k <5)
			{
				while (m <5)
				{
					if ((i != j) && (i != m) && (i != k) && (k != m) && (j != k) && (j != m) && (k != m))
					{
						matrix[punt][1] = i;
						matrix[punt][2] = j;
						matrix[punt][3] = k;
						matrix[punt][4] = m;
						punt++;
					}
					m++;
				}
				m = 1;
				k++;
			}
			k =1;
			j++;
		}
		j =1;
		i++;
	}
}
