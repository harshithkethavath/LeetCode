// First Solution

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> count;

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }

        for (auto number : count) {
            if (number.second == 1) {
                return number.first;
            }
        }
        return -1;
    }
};