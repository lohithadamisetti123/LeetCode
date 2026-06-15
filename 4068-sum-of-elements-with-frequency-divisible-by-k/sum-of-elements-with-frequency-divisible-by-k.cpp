class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int> freq;
        for(int i:nums) freq[i]++;
        for(auto &p:freq){
            if(p.second%k==0) sum+=((p.second)*(p.first));
        }
        return sum;
    }
};