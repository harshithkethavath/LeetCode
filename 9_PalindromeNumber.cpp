// First Solution

class Solution {
public:
    bool isPalindrome(int x) {
        long int leftex = 1;
        int rightex = 10;
        int temp = x;

        if (x < 0) {
            return false;
        }

        while (temp >= 1) {
            leftex *= 10;
            temp /= 10;
        }

        leftex /= 10;

        while (leftex > 1) {
            int left = x / leftex;
            int right = x % rightex;

            if (left != right) {
                return false;
            }

            x = x % leftex;
            x = x / rightex;

            leftex /= 100;
        }

        return true;
    }
};