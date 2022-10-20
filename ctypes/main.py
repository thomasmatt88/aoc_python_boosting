# https://www.digitalocean.com/community/tutorials/calling-c-functions-from-python
import ctypes

so_file = "./c_functions.so"
f = ctypes.CDLL(so_file).primes
f.restype = ctypes.POINTER(ctypes.c_int * 10)
for n in f().contents:
    print(n)



