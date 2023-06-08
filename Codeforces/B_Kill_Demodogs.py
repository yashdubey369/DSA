t=int(input()):
for a in range(t):
    sum=(4*n)-1
    y=n
    k=n+1
    a=4
    i=2
    for i in range(a):
        if sum%i==0:
        sum=sum/i
    

        elif k%i==0:
        k=k/i
        else
        y=y/i; 
    
    sum=(((((sum*y)%1000000007)*k)%1000000007)*2022)%1000000007
    print(sum):