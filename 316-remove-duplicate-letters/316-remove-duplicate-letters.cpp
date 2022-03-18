class Solution {
public:
    string removeDuplicateLetters(string s) { 
        int count[26] = {0};
        for(auto c : s)
            count[c - 'a']++;
        string res;bool st[26] = {false}; 
        for(auto c : s){
            count[c - 'a']--; 
            if(st[c - 'a']) continue; 
            while(res.size() > 0 && count[res.back() - 'a'] > 0 && res.back() > c){
                st[res.back() - 'a'] = false;
                res.pop_back();}
            res += c;st[c - 'a'] = true;
        }
        return res;
    }
};
