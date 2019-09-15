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

void drawmatrix(int ***matriz, int n);
int solve(int **test, int  **sol);
void order(int ***array, int **sol, int nsol);
int dataint(char **test, int **test1);
void row1234(int ***matriz, int r1, int r2, int r3, int r4, int sol, int **matriz1234);
void matrix24(int **matriz);
void filter(int ***matini, int ***matsol, int nsol);
void lookright(int ***matriz, int nsol);
void lookleft(int ***matriz, int nsol);
void lookdown(int ***matriz, int nsol);
void lookup(int ***matriz, int nsol);
void matrixfull1234(int ***array, int **matriz1234);

void malloc3(int ***array, int rows, int cols, int nsolution)
{
    int n;
    int r;
    
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







int main(int rt, char **test)
{
	int rows;
	int cols;
	int nsolution;
	int ***array;
    int **matrix1234;
    int ***matsol;
    int **test1;
    int **sol;
    long int n;
	int r;
    int nsol;
 
  
    
    nsol = 0;
    if (rt != 2)
    {
        write(1, "Error\n", 6);
        return (0);
    }

    //malloc3(array, 7, 6, 350000);
    
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

    matrix1234=(int **) malloc (sizeof(int *)*25);
    r = 0;
        while (r++ < 25)
        {
            matrix1234[r]=(int *) malloc (sizeof(int)*5);
        }
        r=0;
    
    rows = 2;
    cols = 100;
    
    test1=(int **) malloc (sizeof(int *)*rows);
    r = 0;
    while (r++ < rows)
    {
        test1[r]=(int *) malloc (sizeof(int)*cols);
    }
    
    rows = 600;
    cols = 100;
    
    sol=(int **) malloc (sizeof(int *)*rows);
    r = 0;
    while (r++ < rows)
    {
        sol[r]=(int *) malloc (sizeof(int)*cols);
    }
    
    
    
    if (dataint(test, test1) != 1)
    {   write(1, "Error\n", 6);
        return (0);
    }
    
    
    matrix24(matrix1234);
    matrixfull1234(array, matrix1234);
    filter(array, matsol, nsol);
    lookleft(matsol, nsol);
    lookright(matsol, nsol);
    lookup(matsol, nsol);
    lookdown(matsol, nsol);
    order(matsol, sol, 577);
    solve(test1, sol);
    n = solve(test1, sol);
    if (n == 0)
    {    write(1, "Error\n", 6);
        return(0);
    }
    drawmatrix(matsol, n+1);
    
}
