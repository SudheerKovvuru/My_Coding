class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        m=len(board)
        n=len(board[0])

        def dfs(i,j,index):
            if index==len(word):
                return True
            if i<0 or i>=m or j<0 or j>=n or board[i][j]=="$" or board[i][j]!=word[index]:
                return False
            board[i][j]="$"
            ans=(dfs(i+1,j,index+1) or
                    dfs(i-1,j,index+1) or
                    dfs(i,j-1,index+1) or
                    dfs(i,j+1,index+1) )
            board[i][j]=word[index]
            return ans
        index=0
        for i in range(m):
            for j in range(n):
                if dfs(i,j,index):
                    return True
        return False
