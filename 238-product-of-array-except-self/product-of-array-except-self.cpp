class Solution {
public:
    int zero(vector<int>& num){
        int count=0;
        for(int n:num){
            if(n==0){
                count++;
            }
        }
        return count;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int mul=1;
        for(int n:nums){
         if(n!=0){
          mul*=n;
         }
        }
        if(zero(nums)>1){
            return res;
        }
        else if(zero(nums)==1){
          for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                res[i]=mul;
                break;
            }
            }  
        }
        else{
            for(int i=0;i<nums.size();i++){
                res[i]=(mul/nums[i]);
            }
        }
        return res;
    }
};