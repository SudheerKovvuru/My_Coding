class Solution:
    def romanToInt(self, s: str) -> int:
        roman={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        ans=0

        i=len(s)-1
        while i>=0:
            print(ans)
            if roman[s[i-1]]<roman[s[i]] and i>0:
                ans+=roman[s[i]]-roman[s[i-1]]
                i-=2
            else:
                ans+=roman[s[i]]
                i-=1
        return ans