#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(int close,int open,string op,vector<string>& ans)
    {
        if(open == 0 && close == 0)
        {
            ans.push_back(op);
            return;
        }
        if(open != 0)
        {
            string op1 = op;
            op1.push_back('(');
            solve(close,open-1,op1,ans);
        }
        if(close > open)
        {
            string op2 = op;
            op2.push_back(')');
            solve(close-1,open,op2,ans);
            return;
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int close = n;
        int open = n;
        string op = "";
        solve(close,open,op,ans);
        for(auto i : ans)
        {
            for(auto j : i)
            {
                cout<<j;
            }
            cout<<endl;
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    sol.generateParenthesis(3);
    return 0;
}