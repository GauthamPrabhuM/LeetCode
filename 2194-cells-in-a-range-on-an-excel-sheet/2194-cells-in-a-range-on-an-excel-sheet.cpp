class Solution {
public:
    vector<string> cellsInRange(string s) {
       vector<string> ans;
        char sc=s[0];
        char ec=s[3];
        char sr=s[1];
        char er=s[4];
        for(int i=int(sc);i<=int(ec); i++)
        {
            for(int j=int(sr); j<=int(er); j++)
            {
                string t;
                t.push_back(char(i));
                t.push_back(char(j));
                ans.push_back(t);
            
            }
        }
        return ans;
        
    }
};