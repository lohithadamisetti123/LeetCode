double findMaxAverage(int* nums, int numsSize, int k) {
    double ans = INT_MIN, sum = 0;
    if(numsSize == 1) return nums[0];
    
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    ans = sum / (double)k;

    for (int i = k; i < numsSize; i++) {
        sum += nums[i] - nums[i - k];
        if (sum / (double)k > ans) {
            ans = sum / (double)k;
        }
    }

    return ans;
}
