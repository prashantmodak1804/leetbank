/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize) {
    *returnSize=numsSize;
    int* tgt=(int*)malloc(numsSize*sizeof(int));
    for (int i=0; i<numsSize; i++) {
        for (int j=i; j>index[i]; j--) {
            tgt[j]=tgt[j-1];
        }
        tgt[index[i]]=nums[i];
    }
    return tgt;
}