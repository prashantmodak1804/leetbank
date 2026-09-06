bool isPalindrome(int x) {
    if (x<0||(x%10==0&&x!=0)) {
        return false;
    }
    int halfrev=0;
    while (x>halfrev) {
        halfrev=halfrev*10+x%10;
        x/=10;
    }
    if ((x==halfrev)||x==halfrev/10) {
        return true;
    }
    else {
        return false;
    }
}