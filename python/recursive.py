def parlleldrom(a):
    if len(a)<=1:
        return True
    else:
        return a[0]==a[-1] and parlleldrom(a[1:-1])
print(parlleldrom('malayalam'))