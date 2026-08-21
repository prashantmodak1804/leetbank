/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    *returnSize=numsSize;
    int* ans=malloc(sizeof(int)*numsSize);
    int idx=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot){
            ans[idx++]=nums[i];
        }
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]==pivot){
            ans[idx++]=nums[i];
        }
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]>pivot){
            ans[idx++]=nums[i];
        }
    }
    return ans;
}