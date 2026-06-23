class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> lar;
        for(int i=0;i<nums.size();i++)
        {
            lar.push(nums[i]);
            if(lar.size()>k)
            {
                lar.pop();
            }
        }
        return lar.top();
    }
};
