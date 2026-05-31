class Solution {
public:
    void subsetsHelper(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& ans) {

        // base case
        if (i == nums.size()) {
            ans.push_back(sub);
            return;
        }

        // exclude
        subsetsHelper(nums, i + 1, sub, ans);

        // include
        sub.push_back(nums[i]);
        subsetsHelper(nums, i + 1, sub, ans);

        // backtrack
        sub.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;

        subsetsHelper(nums, 0, sub, ans);

        return ans;
    }
};