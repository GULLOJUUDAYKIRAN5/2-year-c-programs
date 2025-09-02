#A commercial real estate company located in Boston owns six office buildings in the Boston area that it leases to business.
#Compute the median and the most common price per square feet
print('Enter the data under the attribute price:\n')
x=list(map(float,input().split()))

print('Enter the data under the attribute frequency:\n')
f=list(map(float,input().split()))

#---------Median---------

N=sum(f)
cusum=0
for i in range(len(x)):
    cusum=cusum+f[i]
    if cusum>N/2:
        print("(i)The median price is=",int(x[i]))
        break
    
#----------Mode---------
    
i=f.index(max(f))
mode=x[i]
print("(ii)The most common price per square feet is=",mode)