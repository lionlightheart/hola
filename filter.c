/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoriano <jsoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 11:14:29 by jsoriano          #+#    #+#             */
/*   Updated: 2019/09/15 17:26:23 by jsoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_n;
int g_colum;
int g_ro;
int g_m;

void	filter(int ***matini, int ***matsol, int nsol)
{
	g_n = 1;
	g_m = 1;
	while (g_n++ < 331777)
	{
		g_colum = 1;
		while (g_colum++ < 5)
		{
			if
				((matini[g_n][1][g_colum] != matini[g_n][2][g_colum]) &&
				(matini[g_n][1][g_colum] != matini[g_n][3][g_colum]) &&
				(matini[g_n][1][g_colum] != matini[g_n][4][g_colum]) &&
				(matini[g_n][2][g_colum] != matini[g_n][3][g_colum]) &&
				(matini[g_n][2][g_colum] != matini[g_n][4][g_colum]) &&
				(matini[g_n][3][g_colum] != matini[g_n][4][g_colum]))
				g_ro = 1;
			while (g_ro++ < 5)
				matsol[g_m][g_ro][g_colum] = matini[g_n][g_ro][g_colum];
			g_m++;
		}
	}
	nsol = g_m;
}
