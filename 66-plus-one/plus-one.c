/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int sum=0,t=1;
    int* res=(int*)malloc((digitsSize+1)* (sizeof(int)));
    int index=0;
 for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + t;
        res[index++] = sum % 10;
        t = sum / 10;
    }
    if (t > 0) {
        res[index++] = t;
    }
    *returnSize=index;
    for(int i=0;i<index/2;i++)
    {
        int temp=res[i];
        res[i]=res[index-i-1];
        res[index-i-1]=temp;
    }
    return res;
}