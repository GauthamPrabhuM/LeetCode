class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size=nums1.size()+nums2.size();
        int left=0;
        int right=0;
        int prev;
        int curr;
        for(int i=0; i<=size/2; i++)
        {
            prev=curr;
            if(right>=nums2.size() || (left<nums1.size() && nums1[left]<=nums2[right]))
                curr=nums1[left++];
            else
                curr=nums2[right++];
        }
        if(size%2==0)
            return (prev+curr)/2.0;
        return curr;
    }
};
