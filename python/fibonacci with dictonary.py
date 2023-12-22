def fib_efficiebt(n, d):
    if n in d:
        return d[n]
    else:
        ans = fib_efficiebt(n-1, d) + fib_efficiebt(n-2, d)
        d[n] = ans
        return ans
d = {1:1, 2:2}
print(fib_efficiebt(50, d))