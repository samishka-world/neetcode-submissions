class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> stream;
    int k;

    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int i=0;i<nums.size();i++)
        {
            stream.push(nums[i]);
            if(stream.size()>k)
            {
                stream.pop();
            }
        }
    }
    
    int add(int val) {
        stream.push(val);
        if(stream.size()>k)
            {
                stream.pop();
            }
        return stream.top();
    }
};
