names=["David","Susan","Kitty","Jessie","Jimmy"]
grades=['A','B','C','D','F']
course=[2.0,3.0,4.0,5.0,6.0]
def scorecard():
    for i in range(len(names)):
        if names[i]==name:
            return grades[i],course[i]
    return "No student found"
name=input("Enter name: ")
print(scorecard())