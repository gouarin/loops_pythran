import numpy as np
def laplacian(u):
  return (                  u[ :-2, 1:-1] +
           u[1:-1, :-2] - 4*u[1:-1, 1:-1] + u[1:-1, 2:] +
                        +   u[2:  , 1:-1] )

#pythran export grayscott_pythran(float64[][], float64[][], float64, float64, float64, float64)

def grayscott_pythran(A, B, Da, Db, f, k):
    a, b = A[1:-1,1:-1], B[1:-1,1:-1]

    La = laplacian(A)
    Lb = laplacian(B)

    abb = a*b*b
    a += Da*La - abb + f*(1 - a)
    b += Db*Lb + abb - (f + k)*b