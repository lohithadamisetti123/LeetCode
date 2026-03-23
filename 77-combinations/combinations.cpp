class Solution {
public:
void Fun(int idx,int n,int k, vector<int>&ds,vector<vector<int>>&ans){
    if(idx>n){
        if(ds.size()==k){
            ans.push_back(ds);
        }
        return;
    }
    ds.push_back(idx);
    Fun(idx+1,n,k,ds,ans);
    ds.pop_back();
    Fun(idx+1,n,k,ds,ans);
}
    vector<vector<int>> combine(int n, int k) {
          vector<vector<int>> ans;
        vector<int> ds;
        Fun(1, n, k, ds, ans);
        return ans;
    }
};