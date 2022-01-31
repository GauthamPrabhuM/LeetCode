class Solution {
public:
    int findComplement(int num) {
        
        int n=(log(num)/log(2))+1;
        int val=0;
        for(int i=0; i<n; i++)
        {
            if(!(num&(1<<i)))
                val+=(1<<i);
        
        }
        return val;
    }
};
