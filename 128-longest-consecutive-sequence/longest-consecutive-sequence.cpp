class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int maxx=1,count=1;
        int i=1;
        while(i<nums.size()){
            if(nums[i]==nums[i-1]+1){
                count++;
            }
            else if (nums[i] != nums[i - 1]){
                maxx=max(maxx,count);
                count=1;
                }
                i++;
            }
        maxx = max(maxx, count);
        return maxx;
    }
};