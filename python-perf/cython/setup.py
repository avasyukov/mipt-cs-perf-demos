from setuptools import setup
from Cython.Build import cythonize

setup(
    ext_modules = cythonize("using_cython.pyx")
)
