char* reverseParentheses(char* s) {
    int n = strlen(s);
    int len = 0;
    int top = -1;

    char* res = (char*)malloc(n + 1);
    int* stk = (int*)malloc(n * sizeof(int));

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            stk[++top] = len;
        } else if (s[i] == ')') {
            int l = stk[top--];
            int r = len - 1;
            while (l < r) {
                char t = res[l];
                res[l] = res[r];
                res[r] = t;
                l++;
                r--;
            }
        } else {
            res[len++] = s[i];
        }
    }

    res[len] = '\0';
    free(stk);
    return res;
}