class Solution {
public:
    int swaps(vector<int>& arr,int idx){
        int anss=0;
        for(int i=0;i<arr.size();i++){
            anss+=abs(arr[i]-(idx+2*i));
        }
        return anss;
    }
    int minSwaps(vector<int>& nums) {
        int e=0,o=0;
        vector<int> even,odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) {
                e++;
                even.push_back(i);
            }
            else{
                 o++;
                 odd.push_back(i);
            }
        }
        if(abs(e-o)>1) return -1;
        if(e>o) return swaps(even,0);
        if(o>e) return swaps(odd,0);
        return min(swaps(even, 0), swaps(odd, 0));
    }
};