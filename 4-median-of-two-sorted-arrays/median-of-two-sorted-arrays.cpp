class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> com;
        com.insert(com.end(),nums1.begin(),nums1.end());
        com.insert(com.end(),nums2.begin(),nums2.end());
        sort(com.begin(),com.end());
        int n=com.size();
        double med;
        if(n%2==0){
            med=(com[n/2]+com[(n/2)-1])/2.0;
        }
        else{
            med=com[n/2];
        }
        return med;
    }
};