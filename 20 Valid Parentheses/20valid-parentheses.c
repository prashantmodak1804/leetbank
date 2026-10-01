bool isValid(char* s) {
    char stack[strlen(s)];
    int top = -1;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') stack[++top] = ')';
        else if (s[i] == '{') stack[++top] = '}';
        else if (s[i] == '[') stack[++top] = ']';
        else if (top == -1 || stack[top--] != s[i]) return false;
    }
    
    return top == -1;
}