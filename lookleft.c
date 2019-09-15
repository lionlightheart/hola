/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lookleft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:40:30 by dperez-z          #+#    #+#             */
/*   Updated: 2019/09/15 20:40:49 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int g_n;
int g_col;
int g_row;
int g_cont;
int g_hmax;

void	lookleft(int ***matriz)
{
	g_n = 1;
	g_hmax = 0;
	g_cont = 0;
	while (g_n <= 577)
	{
		g_row = 1;
		while (g_row < 5)
		{
			g_col = 1;
			while (g_col < 5)
			{
				if (g_hmax < matriz[g_n][g_row][g_col])
				{
					g_cont++;
					g_hmax = matriz[g_n][g_row][g_col];
				}
				g_col++;
			}
			matriz[g_n][g_row][0] = g_cont;
			g_cont = 0;
			g_hmax = 0;
			g_row++;
		}
		g_n++;
	}
}
