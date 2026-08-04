/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    int freq[101]={0};
    int ll=nums[0];
    int ul=nums[0];
    for (int i=0; i<numsSize; i++) {
        freq[nums[i]]=1;
        if (nums[i]<ll) {
            ll=nums[i];
        }
        if (nums[i]>ul) {
            ul=nums[i];
        }
    }
    int count=(ul-ll+1)-numsSize;
    int* ans = malloc(sizeof(int)*count);
    int idx=0;
    for (int i=ll; i<=ul; i++) {
        if (freq[i]==0) {
            ans[idx++]=i;
        }
    }
    *returnSize=count;
    return ans;
}