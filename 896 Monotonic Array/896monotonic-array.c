bool isMonotonic(int* nums, int numsSize) {
    bool incr = true;
    bool decr = true;

    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            incr = false;
        }
        if (nums[i] < nums[i + 1]) {
            decr = false;
        }
        if (!incr && !decr) {
            return false;
        }
    }

    return true;
}