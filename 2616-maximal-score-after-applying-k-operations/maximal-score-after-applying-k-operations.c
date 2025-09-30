void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int heap[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && heap[left] > heap[largest])
        largest = left;
    if (right < n && heap[right] > heap[largest])
        largest = right;
    if (largest != i) {
        swap(&heap[i], &heap[largest]);
        heapify(heap, n, largest);
    }
}

void buildMaxHeap(int heap[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(heap, n, i);
}

long long maxKelements(int* nums, int numsSize, int k) {
    long long score = 0;
    buildMaxHeap(nums, numsSize);
    for (int i = 0; i < k; i++) {
        score += nums[0];
        nums[0] = (nums[0] + 2) / 3;
        heapify(nums, numsSize, 0);
    }
    return score;
}
