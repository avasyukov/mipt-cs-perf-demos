#include<stdio.h>

#define SIZE 10

void set_row(double *a, double *b, long i, long n)
{
	long j;
	for (j = 0; j < n; j++)
		a[n*i+j] = b[j];
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
