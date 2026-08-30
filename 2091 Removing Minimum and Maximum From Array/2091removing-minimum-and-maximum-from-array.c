int minimumDeletions(int* nums, int numsSize) {
    int minidx=0, maxidx=0;
    for (int i=1; i<numsSize; i++) {
        if (nums[i]<nums[minidx]) {
            minidx=i;
        }
        if (nums[i]>nums[maxidx]) {
            maxidx=i;
        }
    }
    if (minidx>maxidx) {
        int temp=minidx;
        minidx=maxidx;
        maxidx=temp;
    }
    int front=maxidx+1;
    int back=numsSize-minidx;
    int both=minidx+1+numsSize-maxidx;

    int min=front<back?front:back;
    return min<both?min:both;
}