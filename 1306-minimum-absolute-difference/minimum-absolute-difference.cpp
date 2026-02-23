class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minval=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            minval=min(abs(arr[i]-arr[i+1]),minval);
        }
        vector<vector<int>> res;
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])==minval){
                res.push_back({arr[i],arr[i+1]});
            }
        }
        return res;

    }
};