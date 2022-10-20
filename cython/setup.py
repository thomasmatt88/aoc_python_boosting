from setuptools import setup
from Cython.Build import cythonize

setup(
    ext_modules=cythonize(
        ['primes_cython.pyx',  # Cython code file with primes() function
         'primes_python.py'],  # Python code file with primes() function
        annotate=True),        # enables generation of the html annotation file
)