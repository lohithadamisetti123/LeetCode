class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        int res=0;
        // for(int i:nums){
        //     if(freq[i]==1){
        //         res=i;
        //         break;
        //     }
        // }
        // return res;
        sort(nums.begin(), nums.end(), [&](int a, int b){
        if(freq[a] == freq[b]) return a > b; 
        return freq[a] < freq[b];             
         });
         return nums[0];
    }
};