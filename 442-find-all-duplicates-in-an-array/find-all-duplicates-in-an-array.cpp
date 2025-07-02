class Solution {
public:
  bool ispre(vector<int>& num,int k){
    for(int n:num){
        if(n==k){
            return false;
        }
    }
    return true;
  }
    vector<int> findDuplicates(vector<int>& nums) {
     vector<int>res;
     unordered_map<int,int> freq;
     for(int num:nums){
        freq[num]++;
     } 
     for(int i=0;i<nums.size();i++){
        if(freq[nums[i]]==2 && ispre(res,nums[i])){
            res.push_back(nums[i]);
        }
     }
     return res;  
    }
};