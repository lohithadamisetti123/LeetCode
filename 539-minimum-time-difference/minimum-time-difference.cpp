class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> res;
        for(int i=0;i<timePoints.size();i++){
            int h = stoi(timePoints[i].substr(0,2));
            int m = stoi(timePoints[i].substr(3,2));
            res.push_back(h*60 + m);
        }
        sort(res.begin(), res.end());
        int mini = INT_MAX;
        for(int i=0;i<res.size()-1;i++){
            mini = min(mini, res[i+1] - res[i]);
        }
        mini = min(mini, 1440 - res.back() + res[0]);
        return mini;
    }
};