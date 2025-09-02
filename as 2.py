l=[1,4,7,10,13,]
u=[4,7,10,13,16,]
f=[6,30,40,16,4,]
N=sum(f)
S=0
for i in range(len(f)):
    S=S+f[i]
    if S>(N/2):
        cf=S-f[i]
        L=l[i]
        F=f[i]
        h=u[i]-l[i]
        break
median=L+((N/2-cf)/F)*h  
print("median:",median)
j=f.index(max(f))
low=l[j]
f_1=f[j]
f_0=f[j-1]
f_2=f[j+1]
h=u[j]-l[j]
mode=low+((f_1-f_0)/(2*f_1-f_0-f_2))*h
print("mode:",mode)