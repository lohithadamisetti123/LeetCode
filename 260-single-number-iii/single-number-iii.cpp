class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2){
            return nums;
        }
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<int> res;
        for(int num:nums){
            if(freq[num]==1){
        res.push_back(num);
            }
        }
        return res;
    }
};