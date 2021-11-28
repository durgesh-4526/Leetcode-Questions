#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        int a = stoi(num1);
        int b = stoi(num2);

        int c = a+b;
        string res = to_string(c);
        cout<<res;
        return res;
    }
};
int main()
{
    string a = "6913259244";
    string b = "71103343";
    Solution s;
    s.addStrings(a,b);
  return 0;
}
// "6913259244"
// "71103343"