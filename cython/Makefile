make:
	python3 setup.py build_ext --inplace

benchmark_cython:
	python3 -m timeit -s 'from primes_cython import primes' 'primes(1000)'

benchmark_python:
	python3 -m timeit -s 'from primes_python import primes' 'primes(1000)'

clean:
	rm -rf build *.so *html *.c