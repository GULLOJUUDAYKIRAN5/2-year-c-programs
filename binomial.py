import numpy as np
from math import factorial as fact
n=int(input("Enter the number of patients"))
p=int(input("Enter the success probability"))/100
a=int(input("Enter the number of patients for probability of exactly"))
b=int(input("Enter the number of patients for probability of atleast"))
print("P1=",fact(n)/(fact(a)*fact(n-a))*p**a*(1-p)**(n-a))
p2=0
for i in range(b,n):
    p2=p2+fact(n)/(fact(i)*fact(n-i))*p**i*(1-p)**(n-i)
print("P2=",p2)
print("Avg=",n*p)