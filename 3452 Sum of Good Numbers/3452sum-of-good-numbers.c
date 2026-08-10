int sumOfGoodNumbers(int* nums, int numsSize, int k) {
    int sum=0;
    for (int i=0; i<numsSize; i++) {
        bool isGood=true;
        if (i-k >= 0 && nums[i]<=nums[i-k]) {
            isGood=false;
        }
        if (i+k < numsSize && nums[i]<=nums[i+k]) {
            isGood=false;
        }
        if (isGood) {
            sum+=nums[i];
        }
    }
    return sum;
}