#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000*1000*1000
#define IDENT 1
#define OP *
#define data_t double

typedef struct{
	long int len;
	data_t *data;
} vec_t;

vec_t *init(long int size)
{
	data_t *data = (data_t*)malloc(size*sizeof(data_t));
	vec_t *vec = (vec_t*)malloc(sizeof(vec_t));
	vec->len = size;
	vec->data = data;
	return vec;
}

double get_vec_element(vec_t *vec, long int idx, data_t *val)
{
	if (idx < 0 || idx >= vec->len)
		return 0;
	*val = vec->data[idx];
	return 1;
}

long int vec_length(vec_t *vec)
{
	return vec->len;
}

data_t* get_vec_start(vec_t* vec)
{
	return vec->data;
}

void process(vec_t *v, data_t *dest)
{
	int length = vec_length(v);
	int limit = length-1;
	data_t *d = get_vec_start(v);
	data_t x0 = IDENT;
	data_t x1 = IDENT;
	data_t x2 = IDENT;
	data_t x3 = IDENT;
	data_t x4 = IDENT;
	data_t x5 = IDENT;
	int i;
	/* Учёт 6-и элементов за раз */
	for (i = 0; i < limit; i+=6) {
		x0 = x0 OP d[i];
		x1 = x1 OP d[i+1];
		x2 = x0 OP d[i+2];
		x3 = x1 OP d[i+3];
		x4 = x0 OP d[i+4];
		x5 = x1 OP d[i+5];
	}
	/* Учёт оставшихся элементов */
	for (; i < length; i++) {
		x0 = x0 OP d[i];
	}
	*dest = x0 OP x1;
}

int main()
{
	vec_t *vector = init(SIZE);
	data_t result;
	process(vector, &result);
	printf("Res = %f\n", result);
	return 0;
}
