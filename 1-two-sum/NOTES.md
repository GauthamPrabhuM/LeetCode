list problem1
```
vector<int> twoSum(vector<int>& nums, int target)
{
unordered_map<int,int> map;
vector<int> v;
for(int i=0; i<nums.size(); i++)
{
if(map.find(target-nums[i])!=map.end())
{
v.push_back(map[target-nums[i]]);
v.push_back(i);
return v;
}
else
map[nums[i]]=i;
}
return v;
```