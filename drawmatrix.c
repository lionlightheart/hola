/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawmatrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:37:17 by dperez-z          #+#    #+#             */
/*   Updated: 2019/09/15 18:45:15 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		drawmatrix(int ***matriz, int n)
{
	int		rows;
	int		cols;
	char	c;

	rows = 1;
	cols = 1;
	while (rows < 5)
	{
		while (cols < 5)
		{
			c = matriz[n][rows][cols] + 48;
			write(1, &c, 1);
			if (cols < 4)
				write(1, " ", 1);
			cols++;
		}
		write(1, "\n", 1);
		cols = 1;
		rows++;
	}
}
