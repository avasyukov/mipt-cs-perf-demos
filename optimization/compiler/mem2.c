#include<stdio.h>

#define SIZE 10

void sum_rows(double *a, double *b, long n)
{
	long i;
	long j;
	for (i = 0; i < n; i++) {
		double val = 0;
		for (j = 0; j < n; j++) {
			val += a[i*n + j];
		}
		b[i] = val;
	}	
}

int main()
{
	int i;
	int j;
	double a[SIZE][SIZE];
	double b[SIZE];
	for(i = 0; i < SIZE; i++) {
		b[i] = i;
	}
	for(i = 0; i < SIZE; i++) {
		for(j = 0; j < SIZE; j++)
			a[i][j] = 0;
	}
	set_row(a, b, 0, SIZE);
	for(i = 0; i < SIZE; i++) {
		printf("%f ",b[i]);
	}
	printf("\n");
	for(i = 0; i < SIZE; i++) {
		for(j = 0; j < SIZE; j++) {
			printf("%f ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
