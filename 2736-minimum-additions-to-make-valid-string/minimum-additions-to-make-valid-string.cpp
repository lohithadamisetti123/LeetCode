class Solution {
public:
    int addMinimum(string word) {
     int a=0,b=0,c=0,ans=0;
     for(int i=0;i<word.size();){
        if(i<word.size() && word[i]=='a')i++;
        else ans++;
        if(i<word.size() && word[i]=='b')i++;
        else ans++;
        if(i<word.size() && word[i]=='c')i++;
        else ans++;
     }   
     return ans;
    }
};