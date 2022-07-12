class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ts=0; int cs=0;
        for(auto it:nums)ts+=it;
        int ls,rs;
        for(int i=0; i<nums.size(); i++){
            ls=cs;
            cs+=nums[i];
            rs=ts-cs;
            if(ls==rs)
                return i;
        }
        return -1;
    }
};