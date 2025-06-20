class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive, negative, res(nums.size());
        
        for (int num : nums) {
            if (num > 0) positive.push_back(num);
            else negative.push_back(num);
        }

        int pos = 0, neg = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                res[i] = positive[pos++];
            } else {
                res[i] = negative[neg++];
            }
        }

        return res;
    }
};
