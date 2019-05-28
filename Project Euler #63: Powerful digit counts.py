n=int(input())
for x in range(1,10):
    result=x**n
    if(len(str(result))==n):
        print(result)
