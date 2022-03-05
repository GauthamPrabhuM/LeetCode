class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int maximum=*max_element(nums.begin(),nums.end());
        int dp[20005];
        vector<int> freq(20005);
        for(auto it:nums)
            freq[it]++;
        dp[1]=freq[1];
        dp[2]=max(dp[1],freq[2]*2);
        for(int i=3; i<=maximum; i++)
        dp[i]=max(dp[i-1],dp[i-2]+i*freq[i]);
        return dp[maximum];
    }
};