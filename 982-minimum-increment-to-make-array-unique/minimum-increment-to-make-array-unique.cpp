class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
         int count = 0;
            sort(nums.begin(), nums.end());
            for(int i = 1; i < nums.size(); i++){
                if(nums[i] <= nums[i-1]){
                    int k = nums[i-1] + 1 - nums[i];
                    nums[i] = nums[i] + k;
                    count +=k;
                }
            }
        return count;
    }
};
