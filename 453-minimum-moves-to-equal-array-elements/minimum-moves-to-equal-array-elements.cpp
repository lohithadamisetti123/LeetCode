class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums[0],c=0;
        for(int n:nums){
            c+=n-k;
        }
        return c;
    }
};