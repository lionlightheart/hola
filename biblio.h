void a(void);
void b(void);
void c(void);
void d(void);
void e(void);

void drawmatrix(int ***matriz, int n);
int solve(int **test, int  **sol);
void order(int ***array, int **sol, int nsol);
int dataint(char **test, int **test1);
void row1234(int ***matriz, int r1, int r2, int r3, int r4, int sol, int **matriz1234);
void matrix24(int **matriz);
void filter(int ***matini, int ***matsol, int nsol);
void lookright(int ***matriz);
void lookleft(int ***matriz);
void lookdown(int ***matriz);
void lookup(int ***matriz);
void matrixfull1234(int ***array, int **matriz1234);

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



void a(void)
{
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
}

void b(void)
{ rows = 7;
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
}

void c()
{
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
}

void d()
{
    rows = 2;
    cols = 100;
    
    test1=(int **) malloc (sizeof(int *)*rows);
    r = 0;
    while (r++ < rows)
    {
        test1[r]=(int *) malloc (sizeof(int)*cols);
    }
}

void e()
{
    rows = 600;
    cols = 100;
    
    sol=(int **) malloc (sizeof(int *)*rows);
    r = 0;
    while (r++ < rows)
    {
        sol[r]=(int *) malloc (sizeof(int)*cols);
    }
}
