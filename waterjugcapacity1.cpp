class Solution {
public:
    int hcf(int a, int b)
    {
        if(b==0)
            return a;
        return hcf(b,a%b);
    }
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if(jug1Capacity+jug2Capacity<targetCapacity)
            return false;
        if(targetCapacity%hcf(jug1Capacity,jug2Capacity)==0)
            return true;
        return false;
    }
};
