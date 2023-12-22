a=('I','am','a','test','tuple')
def every_second_element(a):
    return a[::2]
print(every_second_element(a))


for i in range(0,len(a)):
    if i%2==0:
        new=new+(a[i],)
print(new)