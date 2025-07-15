class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int mini=INT_MAX,n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                   int sum=abs((nums[i]+nums[j]+nums[k])-target);
                   if(sum<mini){
                    mini=sum;
                    ans=nums[i]+nums[j]+nums[k];
                   }
                }
            }
        }
        return ans;
    }
};