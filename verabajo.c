/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verabajo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanader <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:27:26 by rpanader          #+#    #+#             */
/*   Updated: 2019/09/15 17:45:30 by rpanader         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_hi;
int g_ro;

void	verabajo(int ***matriz, int nsol)
{
	int n;
	int col;
	int row;

	n = 1;
	col = 1;
	row = 1;
	g_ro = 0;
	while (n++ <= nsol)
	{
		g_hi = 0;
		while (col++ < 5)
		{
			while (row++ < 5)
				if (g_ro < matriz[n][row][col])
				{
					g_hi++;
					g_ro = matriz[n][row][col];
				}
			matriz[n][6][col] = g_hi;
			g_ro = 0;
			row = 1;
		}
		col = 1;
	}
}
