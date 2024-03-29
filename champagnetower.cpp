#define ll long long
class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double dp[101][101]={0.0};
        dp[0][0]=poured;
        for(ll i=0; i<100; i++)
        {
            for(ll j=0; j<=i; j++)
            {
                if(dp[i][j]>=1)
                {
                    dp[i+1][j]+=(dp[i][j]-1)/2.0;
                    dp[i+1][j+1]+=(dp[i][j]-1)/2.0;
                    dp[i][j]=1;
                }
            }
        }
        return dp[query_row][query_glass];
        
        
    }
};
