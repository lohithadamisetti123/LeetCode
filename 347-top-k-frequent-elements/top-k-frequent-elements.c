/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int count(int arr[],int n,int val){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            c++;
        }
    }
    return c;
 }
 bool pre(int arr[],int n,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return false;
        }
    }
    return true;
 }
int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
    int* res=(int*)malloc(k* sizeof(int));
    int* freq=(int*)malloc(numsSize* sizeof(int));
    int* ele=(int*)malloc(numsSize* sizeof(int));
    int idx=0;
    for(int i=0;i<numsSize;i++){
        if(pre(ele,idx,nums[i])){
            freq[idx]=count(nums,numsSize,nums[i]);
            ele[idx]=nums[i];
            idx++;
        }
    }
    for(int i=0;i<idx;i++){
        for(int j=0;j<idx-1;j++){
            if(freq[j+1]>freq[j]){
                int temp=freq[j];
                freq[j]=freq[j+1];
                freq[j+1]=temp;

                 int temp1=ele[j];
                ele[j]=ele[j+1];
                ele[j+1]=temp1;
            }
        }
        for(int i=0;i<k;i++){
            res[i]=ele[i];
        }
    }
   *returnSize=k;
   return res;
}