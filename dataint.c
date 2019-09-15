/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dataint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:30:05 by dperez-z          #+#    #+#             */
/*   Updated: 2019/09/15 16:37:20 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		dataint(char **test, int **test1)
{
	int n;
	int m;

	n = 0;
	m = 0;
	while (test[1][n] != '\0')
	{
		n++;
	}
	if (n != 31)
		return (9);
	n = 0;
	while (n < 31)
	{
		if (((test[1][n] > '0') && (test[1][n] <= '4')) &&
			((test[1][n + 1] == ' ' || test[1][n + 1] == '\0')))
		{
			test1[1][m] = test[1][n] - 48;
			m++;
		}
		n++;
	}
	if (m != 16)
		return (9);
	return (1);
}
