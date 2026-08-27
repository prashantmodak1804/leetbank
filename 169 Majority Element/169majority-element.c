int majorityElement(int* nums, int numsSize) {
    int candidate=-1;
    int votes=0;
    for (int i=0; i<numsSize; i++) {
        if (votes==0) {
            candidate=nums[i];
            votes=1;
        }
        else {
            if (candidate==nums[i]) {
                votes++;
            }
            else {
                votes--;
            }
        }
    }
    int count=0;
    for (int i=0; i<numsSize; i++) {
        if (candidate==nums[i]) {
            count++;
        }
    }
    if (count>numsSize/2) {
        return candidate;
    }
    else {
        return -1;
    }
}