/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lookup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoriano <jsoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:38:13 by rpanader          #+#    #+#             */
/*   Updated: 2019/09/15 18:35:44 by jsoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_cont;
int g_hmax;

void	lookup(int ***matriz, int nsol)
{
	int n;
	int col;
	int row;

	n = 1;
	col = 1;
	row = 4;
	g_hmax = 0;
	while (n++ <= nsol)
	{
		g_cont = 0;
		while (col++ < 5)
			while (row-- > 0)
			{
				if (g_hmax < matriz[n][row][col])
				{
					g_cont++;
					g_hmax = matriz[n][row][col];
				}
				matriz[n][5][col] = g_cont;
				g_hmax = 0;
				row = 4;
			}
		col = 1;
	}
}
