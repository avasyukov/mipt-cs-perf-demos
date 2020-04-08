#include <stdlib.h>
#include <time.h>


#define N 2048

float a[N][N];
float b[N][N];
float c[N][N];


void init_matrix() {
    unsigned long long int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            a[i][j] = random()/RAND_MAX;
            b[i][j] = random()/RAND_MAX;
        };
    };
};

void mult() {
    unsigned long long int i, j, k;
    
    for (k = 0; k < N; k++) {
        for (i = 0; i < N; i++) {
            #pragma omp parallel
            {
                #pragma omp for 
                for (j = 0; j < N; j++) {
                    c[i][j] = c[i][j] + a[i][k]*b[k][j];
                };
            }
        };
    };
};

int main(int argc, char **argv) {
    struct timespec begin, end;
    unsigned long int delta_ms;

    init_matrix();

    mult();

    return EXIT_SUCCESS;
}
