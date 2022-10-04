import ctypes

lib = ctypes.CDLL('./prctprimes.so')
lower = int(input('Lower limit:'))
upper = int(input('Upper limit:'))
print('Number of Primes=', lib.Countprime(lower,upper))
