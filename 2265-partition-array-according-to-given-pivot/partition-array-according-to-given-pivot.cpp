class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> equal;
        vector<int> great;
        for(int n:nums){
            if(n<pivot){
                less.push_back(n);
            }
           else if(n>pivot){
                great.push_back(n);
            }
            else{
                equal.push_back(n);
            }
        }
       vector<int> res;
       res.insert(res.end(),less.begin(),less.end());
       res.insert(res.end(),equal.begin(),equal.end());
       res.insert(res.end(),great.begin(),great.end());
       return res;
    }
};