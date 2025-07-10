#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    long long maxScore(vector<int>& nums) {
        int n = nums.size();
        long long total_gcd = nums[0], total_lcm = nums[0];

        for (int i = 1; i < n; ++i) {
            total_gcd = gcd(total_gcd, nums[i]);
            total_lcm = lcm(total_lcm, nums[i]);
        }
        
        long long max_score = total_gcd * total_lcm;
        
        for (int i = 0; i < n; ++i) {
            long long gcd_remaining = 0, lcm_remaining = 1;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    gcd_remaining = gcd(gcd_remaining, nums[j]);
                    lcm_remaining = lcm(lcm_remaining, nums[j]);
                }
            }
            max_score = max(max_score, gcd_remaining * lcm_remaining);
        }
        
        return max_score;
    }

private:
    long long gcd(long long a, long long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }
};
