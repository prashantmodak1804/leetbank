/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize=n;
    char** res=(char**)malloc(n*sizeof(char*));
    for (int i=1; i<=n; i++) {
        if (i%15==0) {
            res[i-1]=(char*)malloc(9*sizeof(char));
            strcpy(res[i-1], "FizzBuzz");
        }
        else if (i%3==0) {
            res[i-1]=(char*)malloc(5*sizeof(char));
            strcpy(res[i-1], "Fizz");
        }
        else if (i%5==0) {
            res[i-1]=(char*)malloc(5*sizeof(char));
            strcpy(res[i-1], "Buzz");
        }
        else {
            res[i-1]=(char*)malloc(12*sizeof(char));
            sprintf(res[i-1], "%d", i);
        }
    }
    return res;
}