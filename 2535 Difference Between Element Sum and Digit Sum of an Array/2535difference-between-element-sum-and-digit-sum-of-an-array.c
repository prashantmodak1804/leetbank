int differenceOfSum(int* nums, int numsSize) {
    int x=0, y=0;
    for (int i=0; i<numsSize; i++) {
        x+=nums[i];
        int a=nums[i];
        while (a>0) {
            y+=a%10;
            a/=10;
        }
    }
    return abs(x-y);
}