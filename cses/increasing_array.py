n=int(input())
arr=list(map(int,input().split()))
minmoves=0
i=1
while i<n:
    if arr[i-1]>arr[i]:
        minmoves+=arr[i-1]-arr[i]
        arr[i]=arr[i-1]
    i+=1
print(minmoves)


