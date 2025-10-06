// First Solution

class Solution {
public:
    int mySqrt(int x) {
        int val = x;
        for (int i = 0; i <= val; i++){
            if (x > 0){
                int sub = 1 + 2 * i;
                x = x - sub;
                if ( x < 0){
                    return i;
                }
            }
            else {
                return i;
            }
        }
        return -1;
    }
};
