class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        stack <int> st;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="+")
            {
                int val1=st.top();
                st.pop();
                int val2=st.top();
                st.push(val1);
                sum=sum+val1+val2;
                st.push(val1+val2);
            }
            else if(operations[i]=="D")
            {
                sum=sum+st.top()*2;
                st.push(2*st.top());
            }
            else if(operations[i]=="C")
            {
                sum=sum-st.top();
                st.pop();
            }
            else
            {
                int num=stoi(operations[i]);
                sum=sum+num;
                st.push(num);
            }
        }
        return sum;
    }
};