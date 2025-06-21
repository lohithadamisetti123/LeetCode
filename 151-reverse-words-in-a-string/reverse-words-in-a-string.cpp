class Solution {
public:
    string reverseWords(string s) {
         istringstream ss(s);
        string word, result;
        
        while (ss >> word) {
            result = word + " " + result;
        }
        
        if (!result.empty()) result.pop_back();
        return result;
    }
};