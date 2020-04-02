import plane_python
import using_cython
import time

number = 10000000

start = time.time()
print(plane_python.test(number))
end =  time.time()

py_time = end - start
print("Python time = {}".format(py_time))

start = time.time()
print(using_cython.test(number))
end =  time.time()

cy_time = end - start
print("Cython time = {}".format(cy_time))
