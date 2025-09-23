class Solution {
public:
    int minOperations(vector<int>& nums) {
     unordered_map<int,int> freq;
     for(int i:nums){
        freq[i]++;
     }
     int ans=0;
     for(auto i:freq){
        if(i.second==1){
            return -1;
        }
        else if(i.second%3==0){
            ans+=i.second/3;
        }
        else{
            ans+=i.second/3 +1;
        }
     }
     return ans;
    }
};