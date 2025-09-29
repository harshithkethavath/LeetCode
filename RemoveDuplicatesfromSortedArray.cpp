// First Solution

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int val = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums[i] = 123;
            }
            else {
                val = nums[i];
                k++;
            }
        }
        k++;
        sort(nums.begin(), nums.end());
        return k;
    }
};
