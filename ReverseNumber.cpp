class Solution {
public:
    int reverse(int n) {
        int rev = 0; 
        while (n != 0) {
            int lastdigit = n % 10;
              // Check for overflow/underflow before updating ans
            if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10)) {
                return 0; 
            }
            rev = rev * 10 + lastdigit; 
            n = n / 10; 
        }
        return rev; 
    }
};