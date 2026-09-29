char* reverseVowels(char* s) {
    int left=0, right=strlen(s)-1;
    while (left<right) {
        char l=tolower(s[left]);
        char r=tolower(s[right]);
        if (!(l=='a' || l=='e' || l=='i' || l=='o' || l=='u')) {
            left++;
        }
        else if (!(r=='a' || r=='e' || r=='i' || r=='o' || r=='u')) {
            right--;
        }
        else {
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
    }
    return s;
}