bool isMiddleElementUnique(int* nums, int numsSize) {
    int mnum=nums[numsSize/2];
    int flag=0;
    for (int i=0; i<numsSize; i++) {
        if (nums[i]==mnum) {
            flag++;
        }
    }
    return flag==1;
}