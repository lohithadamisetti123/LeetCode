class Solution {
public:
    int findLucky(vector<int>& arr) {
        int res=-1;
        unordered_map<int,int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        sort(arr.begin(),arr.end(),greater<int>());
        for(int i=0;i<arr.size();i++){
            if(freq[arr[i]]==arr[i]){
                res=arr[i];
                break;
            }
        }
        return res;
    }
};