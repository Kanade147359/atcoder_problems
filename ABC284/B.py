T = int(input())
for i in range(T):
    N = int(input())
    tlist = []
    tlist.append(list(map(int,input().split())))
    count = 0
    for j in tlist[0]:
        if(j%2==1):
            count = count + 1
    print(count)