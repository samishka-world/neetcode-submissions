class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue <pair<int,vector<int>>> clo;

        for(auto &p : points)
        {
            int dis=p[0]*p[0]+p[1]*p[1];
            clo.push({dis,p});

            if(clo.size()>k)
            {
                clo.pop();
            }
        }

        vector<vector<int>> ans;
        while(!clo.empty())
        {
            ans.push_back(clo.top().second);
            clo.pop();
        }
        return ans;
    }
};
