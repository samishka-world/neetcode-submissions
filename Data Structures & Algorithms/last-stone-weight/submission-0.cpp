class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pack(stones.begin(),stones.end());
        int x,y;
        while(pack.size()>1)
        {
            x=pack.top();
            pack.pop();
            y=pack.top();
            pack.pop();
            if(x>y)
            {
                pack.push(x-y);
            }
        }
        if(pack.empty())
            return 0;
        else
            return pack.top();
    }
};
