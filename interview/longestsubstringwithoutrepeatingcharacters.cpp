class Solution 
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char,bool> m;
        int len=s.length();
        int low=0;
        int max_len=0;
        for(int high=0; high<len; high++)
        {
            while(m[s[high]]==true)
                m[s[low++]]=false;
            m[s[high]]=true;
            max_len=max(max_len,high-low+1);
        }
        return max_len;
    }
        
};
