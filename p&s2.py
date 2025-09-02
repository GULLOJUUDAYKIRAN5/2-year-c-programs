from collection import counter
data=Counter(val)
get_mode=dict(data)
mode=[k for k,v in get_mode.items() if v==max(list(data.values()))]
if len(mode)==n:
    get_mode="(i) No mode found"
else:
    get_mode="(ii) mode is/are:"+','.join(map(str,mode))
    print('\n(ii)The most common net payment is =',get_mode)