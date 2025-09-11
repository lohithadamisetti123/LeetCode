class Solution {
public:
    string resultingString(string s) {
        vector<char> st;
        for(int i=0;i<s.size();i++){
           if(!st.empty() && (abs(st.back()-s[i])==1 || abs(st.back()-s[i])==25)){
            st.pop_back();
           }
           else{
            st.push_back(s[i]);
           }
        }
        return string(st.begin(), st.end());

    }
};