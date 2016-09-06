#pythran export calculPi(int)
#pythran export calculPi_omp(int)

def f(x):
    return 4./(1 + x**2)

def calculPi(n):
    h, pi = 1./n, 0.
    for i in xrange(n):
        pi += f(h*(i+.5))
    return pi*h

def calculPi_omp(n):
    h, pi = 1./n, 0.
    #omp parallel for reduction(+:pi)
    for i in range(n):
        pi += f(h*(i+.5))
    return h*pi