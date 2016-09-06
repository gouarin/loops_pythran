import time
import pi
import pi_pythran

nrep = 10
n = 100000000

# t1 = time.time()
# for i in xrange(nrep):
#     pi.calculPi(n)
# t2 = time.time()
# print (t2 - t1)/nrep

t1 = time.time()
for i in xrange(nrep):
    pi = pi_pythran.calculPi(n)
t2 = time.time()
print (t2 - t1)/nrep, pi

t1 = time.time()
for i in xrange(nrep):
    pi = pi_pythran.calculPi_omp(n)
t2 = time.time()
print (t2 - t1)/nrep, pi
