/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int is_sorted_and_consecutive(int* arr, int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[i - 1] + 1) {
            return 0;
        }
    }
    return 1;
}

int* resultsArray(int* nums, int numsSize, int k, int* returnSize) {
    *returnSize = numsSize - k + 1;
    int* results = (int*)malloc(*returnSize * sizeof(int));
    
    for (int i = 0; i < *returnSize; i++) {
        int isValid = 1;
        int maxElement = nums[i];
        for (int j = 1; j < k; j++) {
            if (nums[i + j] != nums[i + j - 1] + 1) {
                isValid = 0;
                break;
            }
            if (nums[i + j] > maxElement) {
                maxElement = nums[i + j];
            }
        }
        
        if (isValid) {
            results[i] = maxElement;
        } else {
            results[i] = -1;
        }
    }
    
    return results;
}

