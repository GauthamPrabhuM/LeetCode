class Solution {
public:
       int getSum(int n){
        int sum = 0;
        while(n>0){
            int i=n%10;
            n/=10;
            sum+=(i*i);
        }
        return sum;
    }
        bool isHappy(int n) {
        unordered_set<int> s;
        while(n!=1 && !(s.count(n))){
            s.insert(n);
            n = getSum(n);
        }
        return n==1;
        }

};