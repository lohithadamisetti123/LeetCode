class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        for(char c : s){
            if(c=='('){
                st.push('(');
            }
            else{
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                else{
                    st.push(')');
                }
            }
        }
        return st.size();
    }
};