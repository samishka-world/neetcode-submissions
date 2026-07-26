class Solution {
public:
    vector<vector<int>> res;
    void printsum(vector<int>&nums,int target,int i,vector<int> cur)
    {
        if(target==0)
        {
            res.push_back(cur);
            return;
        }
        if(target<0 || i>=nums.size())
        {
            return;
        }
        cur.push_back(nums[i]);
        printsum(nums,target-nums[i],i,cur);
        cur.pop_back();
        printsum(nums,target,i+1,cur);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>cur;
        printsum(nums,target,0,cur);
        return res;
    }
};
