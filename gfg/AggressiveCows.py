class Solution:
    def aggressiveCows(self, stalls, k):
        # your code here
        mindist=0
        def possible(mid):
            posi=0
            count=1
            for i in range(1,len(stalls)):
                if stalls[i]-stalls[posi]>=mid:
                    posi=i
                    count+=1
                    if count>=k:
                        return True
            return False
        stalls.sort()
        i=1
        j=stalls[-1]-stalls[0]
        while i<=j:
            mid=(i+j)//2
            if possible(mid):
                mindist=max(mindist,mid)
                i=mid+1
            else:
                j=mid-1
        return mindist
        