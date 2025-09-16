class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        reverse(asteroids.begin(), asteroids.end());
        vector<int> res;
        for (int i = 0; i < asteroids.size(); i++) {
            bool alive = true;
            while (!res.empty() && res.back() < 0 && asteroids[i] > 0) {
                if (abs(res.back()) < abs(asteroids[i])) {
                    res.pop_back();
                    continue;
                } else if (abs(res.back()) == abs(asteroids[i])) {
                    res.pop_back();
                }
                alive = false;
                break;
            }
            if (alive) res.push_back(asteroids[i]);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
