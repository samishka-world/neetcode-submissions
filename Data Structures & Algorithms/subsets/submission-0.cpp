class Solution {
public:

    void printsubset(vector <int>& nums, int i,vector<int>& subset, vector<vector<int>>& res)
    {
        if(i>= nums.size())
        {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        printsubset(nums,i+1,subset,res);
        subset.pop_back();
        printsubset(nums,i+1,subset,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>subset;
        printsubset(nums,0,subset,res);
        return res;
    }
};
