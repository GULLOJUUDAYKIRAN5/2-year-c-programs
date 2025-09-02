N=sum(f)
cusum=0
for i in range(len(f)):
    cusum=cusum+f[i]
    if cusum>N/2:
        Low=L[i]
        cf=cusum-f[i]
        F=f[i]
        h=u(i)-L[i]
        median=Low+(N/2-cf)*h/f
        break: