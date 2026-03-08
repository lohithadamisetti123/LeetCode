class Solution {
public:
    int count(vector<int>& arr, int val){
        int c = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == val){
                c++;
            }
        }
        return c;
    }

    bool pre(vector<int>& arr, int n, int val){
        for(int i = 0; i < n; i++){
            if(arr[i] == val){
                return false;
            }
        }
        return true;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> freq(nums.size());
        vector<int> ele(nums.size());
        int idx = 0;

        for(int i = 0; i < nums.size(); i++){
            if(pre(ele, idx, nums[i])){
                freq[idx] = count(nums, nums[i]);
                ele[idx] = nums[i];
                idx++;
            }
        }

        for(int i = 0; i < idx; i++){
            for(int j = 0; j < idx - 1; j++){
                if(freq[j+1] > freq[j]){
                    swap(freq[j], freq[j+1]);
                    swap(ele[j], ele[j+1]);
                }
            }
        }

        vector<int> res(k);
        for(int i = 0; i < k; i++){
            res[i] = ele[i];
        }

        return res;
    }
};