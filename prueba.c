/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanader <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:49:10 by rpanader          #+#    #+#             */
/*   Updated: 2019/09/14 10:50:54 by rpanader         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int rows;
	int cols;
	int nsolution;
	int ***array;
	int n;
	int r;
	int c;


	rows = 6;
	cols = 6;
	nsolution = 331776;
	array = (int ***) malloc (sizeof(int ***)*nsolution);
	n = 0;
	while (n++ < nsolution)
	{
		array[n]=(int **) malloc (sizeof(int *)*rows);
		r = 0;
		while (r++ < rows)
		{
			array[n][r]=(int *) malloc (sizeof(int)*cols);
		}
		r=0;
	}

	}
