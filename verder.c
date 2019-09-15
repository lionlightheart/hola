/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verder.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanader <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:04:47 by rpanader          #+#    #+#             */
/*   Updated: 2019/09/15 15:45:08 by rpanader         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_c;
int		g_e;

void	verder(int ***matriz, int nsol)
{
	int n;
	int	col;
	int row;

	n = 1;
	col = 4;
	row = 1;
	g_c = 0;
	while (n++ <= nsol)
	{
		g_e = 0;
		while (row++ < 5)
			while (col-- > 0)
			{
				if (g_c < matriz[n][row][col])
				{
					g_e++;
					g_c = matriz[n][row][col];
				}
				matriz[n][row][5] = g_e;
				g_c = 0;
				col = 4;
			}
		row = 1;
	}
}
