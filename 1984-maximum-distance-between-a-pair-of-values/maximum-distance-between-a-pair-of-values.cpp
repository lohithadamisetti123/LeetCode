class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
       int i=0,j=0;
       int ans=0;
       while(i<nums1.size() && j<nums2.size()){
        if(i<=j && nums1[i]<=nums2[j]){
          ans=max(j-i,ans);
          if(nums1[i]>nums2[j]){
            i++;
        }
        else{
            j++;
        }
        }
        else if(nums1[i]>nums2[j]){
            i++;
        }
        else{
            j++;
        }
       }
       return ans;
    }
};