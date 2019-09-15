/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:18:44 by dperez-z          #+#    #+#             */
/*   Updated: 2019/09/15 19:18:57 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	solve(int **test, int **sol)
{
	int	n;
	int	m;
	int flag;

	n = 1;
	m = 1;
	while (n < 578)
	{
		flag = 1;
		while (m <= 16)
		{
			if (sol[n][m] != test[1][m - 1])
				flag = 0;
			m++;
		}
		if (flag == 1)
		{
			return (n - 1);
		}
		m = 1;
		n++;
	}
	return (0);
}
