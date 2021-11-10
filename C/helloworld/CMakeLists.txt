cmake_minimum_required(VERSION 3.17)
project(helloworld C)

set(CMAKE_C_STANDARD 99)


add_executable(PrintPrimeNumbers PrintPrimeNumbers.c)
add_executable(isPrime_zju isPrime_zju.c)
add_executable(memchr memchr.c)
add_executable(saddlePoint saddlePoint.c)
add_executable(saddlePoint_csdn saddlePoint_csdn.c)
add_executable(select_sort select_sort.c)
add_executable(select_sort_lite select_sort_array.c)


add_executable(bubble bubble.c)
add_executable(exp_test exp_test.c)
add_executable(printftest printftest.c)
add_executable(poiteroverflowTest poiteroverflowTest.c)
add_executable(float float.c)