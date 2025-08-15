class Solution {
public:
    bool isPalindrome(int n) {
        if(n < 0) {
            return false;
        }
        long rev = 0;
        int num = n;
        while(num != 0) {
            rev = rev * 10 + num % 10;
            num =num/ 10;
        }
        return rev == n;
    }
};