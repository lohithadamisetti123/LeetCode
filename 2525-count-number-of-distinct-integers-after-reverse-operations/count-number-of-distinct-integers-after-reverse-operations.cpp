class Solution {
public:
    int reverse(int k){
        int rev=0;
        while(k!=0){
            rev=rev*10+(k%10);
            k/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int i=0;
        vector<int> res;
        for(int num:nums){
            res.push_back(num);
            res.push_back(reverse(num));
        }
        unordered_map<int, int> freq;
        for (int num : res) {
            freq[num]++;
        }
        return freq.size();
    }
};