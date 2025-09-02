print('enter the data under the attribute net pay:\n')
val=list(map(float,input().split()))
n=len(val)
val.sort()
if n%2==0:
    median1=val[n//2]
    median2=val[n//2-1]
    median=(median1+median2)/2
else:
    median=val[n//2]
print('\n the median of all net payments is =',median)
from collections import Counter
data=Counter(val)
get_mode=dict(data)
mode=[k for k,v in get_mode.items()if v==max(list(data.values()))]
if len(mode)==n:
    get_mode="no mode found"
else:
    get_mode="mode is /are:"+','.join(map(str,mode))
print('\n the most common net paymant is=',get_mode)