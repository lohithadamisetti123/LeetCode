class Solution {
public:
    bool ccc(vector<int>& arr, int k) {
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == k) return false;
        }
        return true;
    }

    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> freq;
        
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (freq[nums[i]] > nums.size() / 3 && ccc(ans, nums[i])) {
                ans.push_back(nums[i]);
            }
        }
        
        return ans;
    }
};
