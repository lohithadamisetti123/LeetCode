class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0, notRob = 0;
        for (int num : nums) {
            int newRob = notRob + num;
            notRob = max(notRob, rob);
            rob = newRob;
        }
        return max(rob, notRob);
    }
};
