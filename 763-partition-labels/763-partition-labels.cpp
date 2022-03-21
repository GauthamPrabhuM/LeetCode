class Solution 
{
public:
        vector<int> partitionLabels(string s) {
        vector<int> last_pos (26,-1);
        int n= s.length();
        vector<int> result;  
        for (auto i=0;i<n;++i)last_pos[s[i]-'a']= i;  
        int start=0,end=0;
        for(auto i=0; i<n;++i){
            end=max(end,last_pos[s[i]-'a']); 
            if (i==end){ 
                result.push_back(end-start+1);
                start=end+1; 
            }  
        }
        return result; 
    }
};
