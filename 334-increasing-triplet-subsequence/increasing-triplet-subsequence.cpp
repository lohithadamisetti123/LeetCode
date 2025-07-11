class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
      int small = INT_MAX;
    int mid = INT_MAX;
    for (int x : nums) {
        if (x <= small) {
            small = x;
        } else if (x <= mid) {
            mid = x;
        } else {
            return true;
        }
    }
    return false;
    }
};