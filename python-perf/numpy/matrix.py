from random import random

N = 512

a = N*[N*[0]]
b = N*[N*[0]]
c = N*[N*[0]]

def init_matrix():
    for i in range(0, N):
        for j in range(0, N):
            a[i][j] = random()
            b[i][j] = random()

def mult():
    for k in range(0, N):
        for i in range(0, N):
            for j in range(0, N):
                c[i][j] = c[i][j] + a[i][k]*b[k][j];


if __name__ == '__main__':
    init_matrix()
    mult()
