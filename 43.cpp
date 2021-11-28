#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        int a = num1[num1.size()-1];
        int b = 0;
        cout<<a;
        cout<<endl;
        for (int i = 0; i < num1.size(); i++)
        {
            a*=10;
            a+=num1[i];
        }
        for (int i = 0; i < num2.size(); i++)
        {
            b*=10;
            b+=num1[i];
        }
        long long int c = a*b;
        string ans = to_string(c);
        return ans;
        cout<<a;
    }
};
int main()
{
    string num1 = "2";
    string num2 = "3";
    Solution sol;
    cout<<sol.multiply(num1,num2);
    return 0;
}

