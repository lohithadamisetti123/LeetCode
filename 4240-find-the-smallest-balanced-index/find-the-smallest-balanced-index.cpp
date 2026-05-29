class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        if(nums.size()==1) return -1;
        //if(nums.size()==3 && nums[0]==nums[nums.size()-1]) return 1;
        long long  i=0,j=nums.size()-1,sum=0;
        __int128 mul=1;
        while(i<=j){
            if(sum==mul && (i==j)){
                return i;
            }
            else if(sum>=mul){
                mul=mul*nums[j];
                j--;
            }
            else{
                sum=sum+nums[i];
                i++;
            }
        }
        return -1;
    }
};