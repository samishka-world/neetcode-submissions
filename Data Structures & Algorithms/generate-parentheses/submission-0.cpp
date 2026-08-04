class Solution {
public:
    vector<string>result;
    void backtrack(int o,int c,int n,string s)
    {
        if(s.size()==2*n)
        {
            result.push_back(s);
            return;
        }
        if(o<n)
        backtrack(o+1,c,n,s+"(");
        if(c<o)
        {
            backtrack(o,c+1,n,s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        backtrack(0,0,n,s);
        return result;
    }
};
