class Solution {
public:
    void solve(int start, vector<int>& nums, int target, vector<int>& path, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(path);
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i-1]) continue; // skip duplicates

            if (nums[i] > target) break;

            path.push_back(nums[i]);
            solve(i + 1, nums, target - nums[i], path, ans);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> path;
        solve(0, candidates, target, path, ans);
        return ans;
    }
};
