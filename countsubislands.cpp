class Solution {
public:
    void dfs(vector<vector<int>>&grid1, vector<vector<int>>&grid2, int i, int j, bool &iswater)
    {
        int r=grid1.size();int c=grid1[0].size();
        if(i>=r || i<0 || j>=c || j<0 || grid2[i][j]!=1)
            return;
        grid2[i][j]=0;
        if(grid1[i][j]==0)
            iswater=true;
        dfs(grid1,grid2,i+1,j,iswater);
        dfs(grid1,grid2,i-1,j,iswater);
        dfs(grid1,grid2,i,j+1,iswater);
        dfs(grid1,grid2,i,j-1,iswater);
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int r=grid1.size();int c=grid1[0].size();int ans=0;
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                if(grid2[i][j]!=0)
                {
                    bool iswater=false;
                    dfs(grid1,grid2,i,j,iswater);
                    if(iswater==false)
                        ans++;
                }
        return ans;
    }
};
