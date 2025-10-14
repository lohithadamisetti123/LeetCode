class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> res;
        const int MOD = 1e9 + 7;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                res.push_back(sum);
            }
        }
        long long summ=0;
        sort(res.begin(),res.end());
        for(int i=left-1;i<right;i++){
            summ+=res[i];
        }
        return summ% MOD;
    }
};