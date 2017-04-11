#include<stdio.h>

#define SIZE 10

double sum(double *val, long i, long j, long n)
{
	/* Сумма соседей of i,j */
	long inj = i*n + j;
	double up    = val[inj - n];
	double down  = val[inj + n];
	double left  = val[inj - 1];
	double right = val[inj + 1];
	double sum = up + down + left + right;
	return sum;
}

int main()
{
	int i;
	int j;
	double a[SIZE][SIZE];
	for(i = 0; i < SIZE; i++) {
		for(j = 0; j < SIZE; j++)
			a[i][j] = 0;
	}
	sum(a, 3, 4, SIZE);
	return 0;
}
