class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=1;
        int i=0; 
         while(i<nums.size()){
            if(nums[i]>0){
            if (nums[i]==ans){
                ans++;
            }
            else if(ans<nums[i]){
                break;
            }
            }
            i++;
         }
         return ans;
    }
};