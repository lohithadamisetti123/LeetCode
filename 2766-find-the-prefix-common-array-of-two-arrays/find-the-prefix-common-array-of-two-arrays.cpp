class Solution {
public:
    int countt(vector<int>& a,vector<int>& b,int k){
        unordered_set<int> s(a.begin(),a.begin()+k+1);
        int c=0;
        for(int i=0;i<=k;i++){
            c+=s.count(b[i]);
        }
        return c;
    }
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
       vector<int> res;
       for(int i=0;i<A.size();i++){
        res.push_back(countt(A,B,i));
       }
       return res;
    }
};