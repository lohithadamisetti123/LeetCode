class Solution {
public:
    bool ispalin(vector<int>& res){
        int i=0,j=res.size()-1;
        while(i<=j){
            if(res[i]!=res[j]){
            return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    } 
    bool isStrictlyPalindromic(int n) {
        int k=n-2;
        vector<int> res;
        while(n>0){
            res.push_back(n%k);
            n/=2;
        }
          return ispalin(res);
    }
};