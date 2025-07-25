class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int n = nums.size();
        long long curr = nums[n - 1];
        long long result = curr;

        for (int i = n - 2; i >= 0; --i) {
            if (nums[i] <= curr) {
                curr += nums[i];
            } else {
                curr = nums[i];
            }
            result = max(result, curr);
        }

        return result;
    }
};
