import numpy as np
import time
import gray_pythran
import gray_pythran_optim

def init(n):
    A = np.ones((n+2,n+2))
    B = np.zeros((n+2,n+2))

    x = np.linspace(0, 1, n+2)
    y = np.linspace(0, 1, n+2)[:, np.newaxis]

    rx = .02
    ry = .04

    mask = (x-.5)**2/rx**2 + (y-.5)**2/ry**2 < 1
    B[mask] = .25
    return A, B

def laplacian(u):
  return (                  u[ :-2, 1:-1] +
           u[1:-1, :-2] - 4*u[1:-1, 1:-1] + u[1:-1, 2:] +
                        +   u[2:  , 1:-1] )

def grayscott(A, B, Da, Db, f, k):
    a, b = A[1:-1,1:-1], B[1:-1,1:-1]

    La = laplacian(A)
    Lb = laplacian(B)

    abb = a*b*b
    a += Da*La - abb + f*(1 - a)
    b += Db*Lb + abb - (f + k)*b

nrep = 10
Da, Db = .1, .05
f, k = 0.0367, 0.0649

A, B = init(2000)
t1 = time.time()
for i in xrange(nrep):
    grayscott(A, B, Da, Db, f, k)
t2 = time.time()
print (t2 - t1)/nrep

A, B = init(2000)
t1 = time.time()
for i in xrange(nrep):
    gray_pythran.grayscott_pythran(A, B, Da, Db, f, k)
t2 = time.time()
print (t2 - t1)/nrep

A, B = init(2000)
t1 = time.time()
for i in xrange(nrep):
    gray_pythran_optim.grayscott_pythran(A, B, Da, Db, f, k)
t2 = time.time()
print (t2 - t1)/nrep
