from random import random
import numpy as np

N = 512

a = np.zeros((N, N))
b = np.zeros((N, N))
c = np.zeros((N, N))

def init_matrix():
    a = np.random.rand(N, N)
    b = np.random.rand(N, N)

def mult():
    for k in range(0, N):
        for i in range(0, N):
            for j in range(0, N):
                c[i][j] = c[i][j] + a[i][k]*b[k][j];


if __name__ == '__main__':
    init_matrix()
    mult()
