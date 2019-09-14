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

void pintar(int ***matriz, int n)
{
    int rows;
    int cols;
    char c;
    
    rows = 1;
    cols = 1;
    
    while (rows < 5)
    {
        while( cols < 5)
        {
            c = matriz[n][rows][cols] + 48;
            write(1, &c, 1);
            write(1, " ", 1);
            cols++;
        }
        write(1, "\n", 1);
        cols = 1;
        rows ++;
    }
}

void matriz24(int *matriz)
{
    int i;
    int j;
    int k;
    int m;
    
    i=0;
    j=0;
    k =0;
    m=0;

    
}


void linea1234(int ***matriz, int r1, int r2, int r3, int r4, int sol)
{
    int i;
    int a;
    int b;
    int c;
    int d;
    int *tabla;
    
    //while (a <5)
     //while (b <5)
       //     while (c<5)
          //      while(d<5)
     
                    
                    
    
    
    
    i = 0;
    while (i < 5)
    {
        matriz[sol][1][i] = 4;
        matriz[sol][2][i] = 4;
        matriz[sol][3][i] = 4;
        matriz[sol][4][i] = 4;
        i++;
    }
}

int main()
{
	int rows;
	int cols;
	int nsolution;
	int ***array;
	long int n;
	int r;
	int c;
    int r1;
    int r2;
    int r3;
    int r4;
    int k;


	rows = 6;
	cols = 6;
	nsolution = 350000;
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
    printf(" memoria reservada ");
    n= 1;
    r1 = 0;
    r2 = 0;
    r3 = 0;
    r4 = 0;
    k = 1;
    while(r1++ < 24)
        {
            while(r2++ < 24)
            {
                while (r3++ < 24)
               {
                   while (r4++ <24)
                   {
                       linea1234(array,r1, r2, r3, r4, n);
                       printf(" %ld \n",n);
                       n++;
                   }
                   r4 =0;
               }
                k = 0;
                r3 = 0;
            }
            r2 = 0;
        }
        r1 = 0;
  
        pintar(array, 150);
}
