class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
       int n=nums.size();
        vector<pair<int,int>> p(n);
        for(int i=0; i<n; i++)
        {
            p[i]={nums[i],i};
            
        }
        sort(p.begin(),p.end());
        int l=0; int r=n-1;
        while(l<r)
        {
            int cur=p[l].first+p[r].first;
            if(cur==target)
            {
                return vector<int> {p[l].second,p[r].second};
            }
            else if(cur>target)
                    r--;
                 else
                     l++;
        }
        assert(false);
    }
};
