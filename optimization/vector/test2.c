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
	int i;
	int length = vec_length(v);
	data_t *d = get_vec_start(v);
	data_t t = IDENT;
	for (i = 0; i < length; i++)
		t = t OP d[i];
	*dest = t;
}

int main()
{
	vec_t *vector = init(SIZE);
	data_t result;
	process(vector, &result);
	return 0;
}
