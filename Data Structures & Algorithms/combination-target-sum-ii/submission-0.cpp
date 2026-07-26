class Solution {
public:
    vector<vector<int>> res;

    void dfs(vector<int>& nums, int target, int start, vector<int>& cur) {
        if (target == 0) {
            res.push_back(cur);
            return;
        }

        for (int i = start; i < nums.size(); i++) {

            if (i > start && nums[i] == nums[i - 1])
                continue;

            
            if (nums[i] > target)
                break;

            cur.push_back(nums[i]);
            dfs(nums, target - nums[i], i + 1, cur);
            cur.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<int> cur;
        dfs(candidates, target, 0, cur);
        return res;
    }
};