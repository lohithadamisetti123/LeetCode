class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        int res=0;
        for(int i:nums){
            if(freq[i]==1){
                res=i;
                break;
            }
        }
        return res;
    }
};