class Solution {
public:
    long long minimumSteps(string s) {
        long long c=0,res=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                c++;
            }
            if(s[i]=='1'){
                res+=c;
                
            }
        }
        return res;
    }
};