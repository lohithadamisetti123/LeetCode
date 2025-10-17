class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0,currmax=0,currmin=0,maxSum=INT_MIN,minSum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            currmax=max(nums[i],nums[i]+currmax);
            maxSum=max(maxSum,currmax);
            currmin=min(nums[i],nums[i]+currmin);
            minSum=min(minSum,currmin);
            total+=nums[i];
        }
        if(maxSum<0) return maxSum;
        else return max(maxSum,total-minSum);
    }
};