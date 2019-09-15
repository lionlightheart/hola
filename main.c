/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanader <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:49:10 by rpanader          #+#    #+#             */
/*   Updated: 2019/09/15 22:13:04 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

void total(int ***matsol)
{
    lookleft(matsol);
    lookright(matsol);
    lookup(matsol);
    lookdown(matsol);
}

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

void f(void)
{
    a();
    b();
    c();
    d();
    e();
}

int main(int rt, char **test)

{
    nsol = 0;
    if (rt != 2)
    {
        write(1, "Error\n", 6);
        return (0);
    }
    f();
    if (dataint(test, test1) != 1)
    {   write(1, "Error\n", 6);
        return (0);
    }
    matrix24(matrix1234);
    matrixfull1234(array, matrix1234);
    filter(array, matsol, nsol);
    total(matsol);
    order(matsol, sol, 577);
    solve(test1, sol);
    n = solve(test1, sol);
    if (n == 0)
    {
        write(1, "Error\n", 6);
        return(0);
    }
    drawmatrix(matsol, n+1);
}
