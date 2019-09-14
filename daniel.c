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
    cols = 0;
    
    while (rows < 7)
    {
        while( cols < 6)
        {
            c = matriz[n][rows][cols] + 48;
            write(1, &c, 1);
            write(1, " ", 1);
            cols++;
        }
        write(1, "\n", 1);
        cols = 0;
        rows ++;
    }
}

void filtro(int ***matini, int ***matsol, int nsol)
{
    int n;
    int rows;
    int colum;
    int c;
    int flag;
    int ro;
    int co;
    int m;
    
    colum = 1;
    rows = 1;
    n = 1;
    c = 1;
    m = 1;
    flag = 0;
    while (n < 331777)
    {
        if (
                (matini[n][1][1] != matini[n][2][1]) &&
                (matini[n][1][1] != matini[n][3][1]) &&
                (matini[n][1][1] != matini[n][4][1]) &&
                (matini[n][2][1] != matini[n][3][1]) &&
                (matini[n][2][1] != matini[n][4][1]) &&
                (matini[n][3][1] != matini[n][4][1]) &&
                (matini[n][1][2] != matini[n][2][2]) &&
                (matini[n][1][2] != matini[n][3][2]) &&
                (matini[n][1][2] != matini[n][4][2]) &&
                (matini[n][2][2] != matini[n][3][2]) &&
                (matini[n][2][2] != matini[n][4][2]) &&
                (matini[n][3][2] != matini[n][4][2]) &&
                (matini[n][1][3] != matini[n][2][3]) &&
                (matini[n][1][3] != matini[n][3][3]) &&
                (matini[n][1][3] != matini[n][4][3]) &&
                (matini[n][2][3] != matini[n][3][3]) &&
                (matini[n][2][3] != matini[n][4][3]) &&
                (matini[n][3][3] != matini[n][4][3]) &&
                (matini[n][1][4] != matini[n][2][4]) &&
                (matini[n][1][4] != matini[n][3][4]) &&
                (matini[n][1][4] != matini[n][4][4]) &&
                (matini[n][2][4] != matini[n][3][4]) &&
                (matini[n][2][4] != matini[n][4][4]) &&
                (matini[n][3][4] != matini[n][4][4])
            )
            {
                    c++;
                    flag = 1;
                    //printf(" %d ", c);
            }
        //colum++;
        
        //colum = 1;
        if (flag == 1)
        {
            ro = 1;
            co = 1;
            while (ro < 5)
            {
                while (co < 5)
                {
                    matsol[m][ro][co] = matini[n][ro][co];
                    co++;
                }
                ro++;
                co = 1;
            }
            m++;
        }
        flag =0;
        n++;
    }
    printf("   %d ", m);
    nsol = m;
    
}

void verizq(int ***matriz, int nsol)
{
    int n;
    int col;
    int row;
    int cont;
    int hmax;
    
    n = 1;
    
    col = 1;
    row = 1;
    hmax = 0;
    cont = 0;
    nsol = 577;
    while(n <= nsol)
    {
        while(row < 5)
        {
          while(col < 5)
          {
              if (hmax < matriz[n][row][col])
              {
                  cont++;
                  hmax = matriz[n][row][col];
              }
              col ++;
          }
            matriz[n][row][0]= cont;
            cont = 0;
            hmax =0;
            col = 1;
            row++;
        }
        row = 1;
        n++;
    }
}
void verder(int ***matriz, int nsol)
{
    int n;
    int col;
    int row;
    int cont;
    int hmax;
    
    n = 1;
    
    col = 4;
    row = 1;
    hmax = 0;
    cont = 0;
    nsol = 577;
    while(n <= nsol)
    {
        while(row < 5)
        {
            while(col > 0)
            {
                if (hmax < matriz[n][row][col])
                {
                    cont++;
                    hmax = matriz[n][row][col];
                }
                col --;
            }
            matriz[n][row][5]= cont;
            cont = 0;
            hmax =0;
            col = 4;
            row++;
        }
        row = 1;
        n++;
    }
}

void verarriba(int ***matriz, int nsol)
    {
        int n;
        int col;
        int row;
        int cont;
        int hmax;
        
        n = 1;
        
        col = 1;
        row = 4;
        hmax = 0;
        cont = 0;
        nsol = 577;
        while(n <= nsol)
        {
            while(col < 5)
            {
                while(row > 0)
                {
                    if (hmax < matriz[n][row][col])
                    {
                        cont++;
                        hmax = matriz[n][row][col];
                    }
                    row --;
                }
                matriz[n][5][col]= cont;
                cont = 0;
                hmax =0;
                row = 4;
                col++;
            }
            col = 1;
            n++;
        }
        
    }

void verabajo(int ***matriz, int nsol)
{
    int n;
    int col;
    int row;
    int cont;
    int hmax;
    
    n = 1;
    
    col = 1;
    row = 1;
    hmax = 0;
    cont = 0;
    nsol = 577;
    while(n <= nsol)
    {
        while(col < 5)
        {
            while(row < 5)
            {
                if (hmax < matriz[n][row][col])
                {
                    cont++;
                    hmax = matriz[n][row][col];
                }
                row ++;
            }
            matriz[n][6][col] = cont;
            cont = 0;
            hmax =0;
            row = 1;
            col++;
        }
        col = 1;
        n++;
    }
    
}
    void matriz24(int **matriz)
{
    int i;
    int j;
    int k;
    int m;
    int punt;
    
    punt =1;
    i=1;
    j=1;
    k=1;
    m=1;
    while (i < 5)
    {
        while(j <5)
        {
            while (k <5)
            {
                while (m <5)
                {
                    if ((i != j) && (i != m) && (i != k) && (k != m) && (j != k) && (j != m) && (k != m))
                    {
                    
                    //printf(" %d %d %d %d %d \n", punt,i,j,k,m);
                    matriz[punt][1] = i;
                    matriz[punt][2]= j;
                    matriz[punt][3]= k;
                    matriz[punt][4]= m;
                    punt++;
                    }
                    m++;
                }
                m = 1;
                k++;
            }
            k =1;
            j++;
        }
        j =1;
        i++;
    }
    //printf("  %d puntero", punt);
    
}


void linea1234(int ***matriz, int r1, int r2, int r3, int r4, int sol, int **matriz1234)
{
    int i;
    int a;
    int b;
    int c;
    int d;
    
    i = 1;
    while (i < 5)
    {
        matriz[sol][1][i] = matriz1234[r1][i];
        matriz[sol][2][i] = matriz1234[r2][i];
        matriz[sol][3][i] = matriz1234[r3][i];
        matriz[sol][4][i] = matriz1234[r4][i];
        i++;
    }
}

int main(int rt, char **test)
{
	int rows;
	int cols;
	int nsolution;
	int ***array;
    int **matriz1234;
    int ***matsol;
	long int n;
	int r;
	int c;
    int r1;
    int r2;
    int r3;
    int r4;
    int k;
    int nsol;


	
    if (rt != 2)
    {
        return (0);
    }
    
    printf(" %c ", test[1][1]);
    
    rows = 7;
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
    
    rows = 7;
    cols = 6;
    nsolution = 350000;
    matsol = (int ***) malloc (sizeof(int ***)*nsolution);
    n = 0;
    while (n++ < nsolution)
    {
        matsol[n]=(int **) malloc (sizeof(int *)*rows);
        r = 0;
        while (r++ < rows)
        {
            matsol[n][r]=(int *) malloc (sizeof(int)*cols);
        }
        r = 0;
    }
    
    
    
    rows = 25;
    cols = 5;

    matriz1234=(int **) malloc (sizeof(int *)*25);
    r = 0;
        while (r++ < 25)
        {
            matriz1234[r]=(int *) malloc (sizeof(int)*5);
        }
        r=0;
    
    matriz24(matriz1234);
    
    n= 1;
    r1 = 1;
    r2 = 1;
    r3 = 1;
    r4 = 1;
    while(r1 < 25)
        {
            while(r2 < 25)
            {
                while (r3 < 25)
               {
                   while (r4 <25)
                   {
                       linea1234(array,r1, r2, r3, r4, n, matriz1234);
                       //printf(" %d %d %d %d \n",r1, r2, r3, r4);
                       n++;
                       r4++;
                   }
                   r4 =1;
                   r3 ++;
               }
               r3 = 1;
            r2 ++;
            }
            r2 = 1;
            r1 ++;
        }
        r1 = 1;
  
    printf(" %ld ", n);
    //pintar(array, 1);
    //write(1, "\n",1);
    //pintar(array, 100000);
    // write(1, "\n",1);
    // pintar(array, 331776);
    filtro(array, matsol, nsol);
    // printf(" %d ", nsol);
    verizq(matsol, nsol);
    verder(matsol, nsol);
    verarriba(matsol, nsol);
    verabajo(matsol, nsol);
    //pintar(matsol, 1);
    write(1, "\n",1);
    pintar(matsol, 576);
    write(1, "\n",1);
    pintar(matsol, 1);
}
