                      // TWO POINTER APPROACH
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1;
        int maxP = 0;

        while (r < prices.size()) {
            int curr = prices[r] - prices[l];

            if (curr > maxP) {
                maxP = curr;
            }

            // IMPORTANT FIX
            if (prices[r] < prices[l]) {
                l = r;
            }

            r++;
        }

        return maxP;
    }
};