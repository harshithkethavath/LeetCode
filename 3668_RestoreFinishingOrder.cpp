// First Solution

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        for (int i = 0; i < order.size(); i++) {
            bool isthere = false;
            for (int j = 0; j < friends.size(); j++) {
                if (order[i] == friends[j]) {
                    isthere = true;
                }
            }

            if (!isthere) {
                order[i] = 0;
            }
        }

        auto new_end = remove(order.begin(), order.end(), 0);
        order.erase(new_end, order.end());

        return order;
    }
};