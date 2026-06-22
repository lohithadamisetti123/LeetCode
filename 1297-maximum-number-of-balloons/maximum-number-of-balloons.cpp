class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        string str="balon";
        for(int i=0;i<text.size();i++){
             if (count(str.begin(), str.end(), text[i])){
                mp[text[i]]++;
             }
        }
        mp['l'] /= 2;
        mp['o'] /= 2;
        return min({mp['b'], mp['a'], mp['l'], mp['o'], mp['n']});
    }
};