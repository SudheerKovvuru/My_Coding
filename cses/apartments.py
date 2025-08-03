#BruteForce Solution
# n,m,k=map(int,input().split())

# applicants=list(map(int,input().split()))
# apartments=list(map(int,input().split()))

# ans=0

# for i in range(n):
#     j=0
#     while j<m:
#         if applicants[i]-k<=apartments[j] and apartments[j]<=applicants[i]+k:
#             ans+=1
#             apartments.pop(j)
#             m-=1
#             break
#         j+=1
# print(ans)

n,m,k=map(int,input().split())

applicants=list(map(int,input().split()))
apartments=list(map(int,input().split()))

applicants.sort()
apartments.sort()

ans=0
i=0
j=0

while i<n and j<m:
        if apartments[j]<applicants[i]-k:
            j+=1
        elif apartments[j]>applicants[i]+k:
            i+=1
        else:
            ans+=1
            j+=1
            i+=1
print(ans)
        