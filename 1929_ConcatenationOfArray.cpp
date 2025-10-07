// First Solution

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> result;
        for(int k = 0; k < 2; k++) {
            for(int i = 0; i < nums.size(); i++) {
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};