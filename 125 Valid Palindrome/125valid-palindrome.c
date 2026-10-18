bool isPalindrome(char* s) {
    int idx = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[idx++] = s[i] + 32;
        } 
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
            s[idx++] = s[i];
        }
    }
    s[idx] = '\0';
    
    int left = 0;
    int right = idx - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}