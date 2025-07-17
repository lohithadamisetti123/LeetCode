class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> great;
        for(int n:nums){
            if(n<pivot){
                less.push_back(n);
            }
            if(n>pivot){
                great.push_back(n);
            }
        }
        int k=nums.size()-(less.size()+great.size());
        while(k--){
            less.push_back(pivot);
        }
        for(int n:great){
                less.push_back(n);
        }
        return less;
    }
};