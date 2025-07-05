/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
   *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));  
    for (int i = 1; i < numsSize; i++) {
        for (int j = 0; j < i; j++) {
            if ((nums[i] + nums[j]) == target) {
                result[0] = j; 
                result[1] = i;   
                break;
            }
        }
        }
        return result;
}
    