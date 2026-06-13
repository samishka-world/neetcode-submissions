class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int res=0;

        while(l<r)
        {
            int area=0;
            area=min(heights[l],heights[r])*(r-l);
            res=max(res,area);

            if(heights[l]<heights[r])
                l++;
            else if(heights[l]>heights[r])
                r--;
            else
            {
                l++;
                r--;
            }
        }
        return res;
    }
};
