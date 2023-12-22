import random
'''
Add 50 rndom numbers to a list
every odd add to seprate list
every odd position add to seprate list
calulate the sum of each list
make it with function
using append split remove del pop sort revere
'''
a= random.sample(range(100),50)
b=[]
c=[]
for i in a:
    if i%2!=0:
        b.append(i)
    if a.index(i)%2!=0:
        c.append(i)
print(a, "\n", b, "\n",c,"\n", sum(a),"\n",sum(b),"\n",sum(c))
