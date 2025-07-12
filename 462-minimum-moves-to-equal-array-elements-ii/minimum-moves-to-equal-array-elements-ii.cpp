class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int k,sum=0;
        if(n%2!=0){
          k=nums[n/2];
        }
        else{
            k=(nums[n/2]+nums[(n/2)-1])/2;
        }
        for(int i=0;i<n;i++){
            sum+=abs(k-nums[i]);
        }
        return sum;
    }
};