class Solution {
public:
    long long minimalKSum(vector<int>& nums, long long k) {
        sort(nums.begin(),nums.end());
        long long ans=(k*(k+1))/2;
        long long storenum=0;
        long long storek=k;
        for(auto it:nums){
            if(it==storenum)
                continue;
            if(it<=storek){
                storek++;
                ans-=it;
                ans+=storek;
                storenum=it;
            }
        }
        return ans;
        
    }
};