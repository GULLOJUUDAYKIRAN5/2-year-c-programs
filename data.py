n=int(input("enter the no of values"))
sum=0
for i in range  (n):
    p=int(input("enter the data values"))
    sum=sum+p
mean=sum/n
print(mean)
var=0
for i in range (n):
    a=int(input("enter the values"))
    var=(a-mean)**2
print(var/n)
    