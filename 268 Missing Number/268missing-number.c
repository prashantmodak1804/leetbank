int missingNumber(int* nums, int numsSize) {
    int* freq=(int*)calloc(numsSize+1, sizeof(int));
    for (int i=0; i<numsSize; i++) {
        freq[nums[i]]++;
    }
    int num=-1;
    for (int i=0; i<=numsSize; i++) {
        if (freq[i]==0) {
            num=i;
            break;
        }
    }
    return num;
}