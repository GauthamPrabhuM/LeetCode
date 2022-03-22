```
static bool comp(pair<int,int>&a,pair<int,int>&b){
return a.first>b.first;}
vector<int> topKFrequent(vector<int>& nums, int k) {
vector<int>ans;
unordered_map<int,int>m;
for(auto i:nums)m[i]++;
vector<pair<int,int>>res;
for(auto i:m)res.push_back({i.second,i.first});
sort(res.begin(),res.end(),comp);
for(int i=0;i<k;i++)ans.push_back(res[i].second);
return ans;}
```