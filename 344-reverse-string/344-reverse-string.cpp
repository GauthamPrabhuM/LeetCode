class Solution {
public:
    void reverseString(vector<char>& s) {
        char t;
        
        for(int i=0, j=s.size()-1; i<j; i++,j--)
        {
          
           t=s[i];
           s[i]=s[j];
            s[j]=t;

        

         }
     }
};