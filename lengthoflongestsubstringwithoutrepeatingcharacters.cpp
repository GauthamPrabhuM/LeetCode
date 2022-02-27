class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> dict(256,0);
        int ans=0, i=0, j=0;
        int n=s.length();
        while(i<n && j<n){
            dict[s[j]]++;
            if(dict[s[j]]==1){
                j++;
                ans=max(ans,j-i);
            }
            else
                dict[s[i++]]=0;
         }
        return ans;      
    }
};
