class Solution {
public:
   
    void dfs(vector<vector<int>> &grid,int i, int j)
    {
            int m=grid.size();
            int n=grid[0].size();

        if(i>=m|| i<0 || j>=n || j<0 || grid[i][j]==0)
            return ;
        grid[i][j]=0;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        
    }
    int numEnclaves(vector<vector<int>>& grid) {
            int m=grid.size();
    int n=grid[0].size();

        int answer=0;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(i==m-1|| j==n-1 || i==0 || j==0)
                    dfs(grid,i,j);
       for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(grid[i][j]==1)
                    answer++;
        return answer;
    }
};
