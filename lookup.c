/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lookup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:04:21 by dperez-z          #+#    #+#             */
/*   Updated: 2019/09/15 21:13:25 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int g_n;
int g_col;
int g_cont;
int g_row;
int g_hmax;

void	lookup(int ***matriz)
{
	g_n = 1;
	g_hmax = 0;
	g_cont = 0;
	while (g_n <= 577)
	{
		g_col = 1;
		while (g_col < 5)
		{
			g_row = 4;
			while (g_row > 0)
			{
				if (g_hmax < matriz[g_n][g_row][g_col])
				{
					g_cont++;
					g_hmax = matriz[g_n][g_row][g_col];
				}
				g_row--;
			}
			matriz[g_n][5][g_col] = g_cont;
			g_cont = 0;
			g_hmax = 0;
			g_col++;
		}
		g_n++;
	}
}
