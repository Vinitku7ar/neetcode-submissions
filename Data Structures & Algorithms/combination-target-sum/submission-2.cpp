class Solution {
public:
    void backtrack(vector<int>& nums, int target, vector<int>& cur, int i, vector<vector<int>>& res) {

        if (target == 0) {
            res.push_back(cur);
            return;
        }

        if (target < 0 || i >= nums.size()) {
            return;
        }

        // include
        cur.push_back(nums[i]);
        backtrack(nums, target - nums[i], cur, i, res);
        cur.pop_back();

        // exclude
        backtrack(nums, target, cur, i + 1, res);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<int> cur;
        vector<vector<int>> res;

        backtrack(nums, target, cur, 0, res);

        return res;
    }
};