class Solution 
{
public:
    int hammingWeight(uint32_t n)
    {
        int ones = 0;
    	while(n!=0) 
        {
    		ones+= (n & 1);
    		n = n>>1;
    	}
    	return ones;

        
    }
};
