class Solution:
    def rle(self,s):
        res=""
        count=1
        for i in range(len(s)-1):
            if s[i]!=s[i+1]:
                res+=(str(count)+s[i])
                count=1
            else:
                count+=1
        return res+(str(count)+s[-1])
    def countAndSay(self, n: int) -> str:
        if n==1:
            return "1"
        return self.rle(self.countAndSay(n-1))
