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
    c = a.dot(b)

if __name__ == '__main__':
    init_matrix()
    mult()
