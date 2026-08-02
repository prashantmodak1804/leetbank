/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i=digitsSize-1; i>=0; i--) {
        if (digits[i]<9) {
            digits[i]++;
            *returnSize=digitsSize;
            int* res=malloc(digitsSize*sizeof(int));
            for (int j=0; j<digitsSize; j++) {
                res[j]=digits[j];
            }
            return res;
        }
        digits[i]=0;
    }
    *returnSize=digitsSize+1;
    int* res=calloc(*returnSize, sizeof(int));
    res[0]=1;
    return res;
}