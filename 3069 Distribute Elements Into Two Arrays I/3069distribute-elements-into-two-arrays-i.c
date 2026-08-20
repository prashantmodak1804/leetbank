/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* resultArray(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int* arr1=(int*)malloc(sizeof(int)*numsSize);
    int* arr2=(int*)malloc(sizeof(int)*numsSize);
    arr1[0]=nums[0];
    arr2[0]=nums[1];
    int x=0, y=0;
    for (int i=2; i<numsSize; i++) {
        if (arr1[x]>arr2[y]) {
            x++;
            arr1[x]=nums[i];
        }
        else {
            y++;
            arr2[y]=nums[i];
        }
    }
    for (int j=0; j<=y; j++) {
        x++;
        arr1[x]=arr2[j];
    }
    free(arr2);
    return arr1;
}