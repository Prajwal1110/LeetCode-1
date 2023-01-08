// Problem Link
// https://leetcode.com/problems/maximum-ice-cream-bars/description/

// Solution:
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int ans = 0;
        for(int i = 0; i < costs.size(); i++) {
            if(coins >= costs[i]) {
                ans++;
                coins -= costs[i];
            }
        }
        return ans;
    }
};