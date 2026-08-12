int minElement(int* nums, int numsSize) {
    int min=1000000;
    for (int i=0; i<numsSize; i++) {
        int temp=nums[i];
        int sum=0;
        while (temp>0) {
            sum+=temp%10;
            temp/=10;
        }
        if (sum<min) {
            min=sum;
        }
    }
    return min;
}