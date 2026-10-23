/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* ans = (int*)malloc((right - left + 1) * sizeof(int));
    int idx = 0;
    
    while (left <= right) {
        int num = left;
        int is_self = 1; 
        
        while (num > 0) {
            int r = num % 10;
            if (r == 0 || left % r != 0) {
                is_self = 0;
                break; 
            }
            num /= 10; 
        }
        
        if (is_self) {
            ans[idx++] = left;
        }
        
        left++; 
    }
    
    *returnSize = idx;
    return ans;
}