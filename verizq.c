/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verizq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanader <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 11:17:04 by rpanader          #+#    #+#             */
/*   Updated: 2019/09/15 16:38:02 by rpanader         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_s;
int g_v;

void	verizq(int ***matriz, int nsol)
{
	int n;
	int col;
	int row;

	n = 1;
	col = 1;
	row = 1;
	g_s = 0;
	while (n++ <= nsol)
	{
		g_v = 0;
		while (row++ < 5)
			while (col++ < 5)
			{
				if (g_s < matriz[n][row][col])
				{
					g_v++;
					g_s = matriz[n][row][col];
				}
				matriz[n][row][0] = g_v;
				g_s = 0;
				col = 1;
			}
		row = 1;
	}
}
