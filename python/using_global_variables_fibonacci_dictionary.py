numcalls=0
def fib(x):
    global numcalls
    numcalls += 1
    if x==0 or x==1:
        return 1
    else:
        return fib(x-1) + fib(x-2)
print(fib(10), numcalls)