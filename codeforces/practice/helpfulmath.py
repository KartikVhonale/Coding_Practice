s=input()
k=list(s)
ans=0
r=""
num=[]
for i in range (0,len(k)):
    if(k[i]!='+'):
        num.append(int(s[i]))
num.sort()
for i in range (0,len(num)):
    r+=str(num[i])
    if(i!=len(num)-1):
        r+=('+')
print(r)