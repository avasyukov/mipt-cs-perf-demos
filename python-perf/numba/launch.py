import plane_python
import with_numba
import time

number = 10000000

start = time.time()
plane_python.test(number)
end =  time.time()

py_time = end - start
print("Python time = {}".format(py_time))

start = time.time()
with_numba.test(number)
end =  time.time()

cy_time = end - start
print("Numba time = {}".format(cy_time))
