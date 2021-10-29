a=int(input())
while a<100 or a>999:
    a=int(input())
x=a%10
c=a//10
y=c%10
a=c//10
z=a%10
while(x==z) or (z==y) or (y==x) or ((x==z)and(x==y)):
    a=int(input())
    x=a%10
    c=a//10
    y=c%10
    a=c//10
    z=a%10
list=[x*100+y*10+z,x*100+z*10+y,y*100+x*10+z,y*100+z*10+x,z*100+y*10+x,z*100+x*10+y]
maxi=max(list)
print(list,maxi)