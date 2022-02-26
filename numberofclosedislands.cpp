class Solution {
public:
    void dfs(vector<vector<int>>&grid, int i, int j)
    {
        if(i>=grid.size()|| i<0 || j>=grid[0].size()||j<0||grid[i][j]==1)
            return ;
        grid[i][j]=1;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ans=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==0 && (i==0||j==0||i==r-1||j==c-1))
                    dfs(grid,i,j);
                
            } 
        }
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==0)
                {
                    dfs(grid,i,j);
                    ans++;
                }
            }
        }
    return ans;
        
                
            
    }
};
