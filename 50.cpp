#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n)
    {
        double a = 1.00000;
        while(n!=0)
        {
            a*=x;
            n--;
        }
        return a;
    }
};
int main()
{
    double x = 2.00000;
    int n = 10;
    Solution s;
    cout<<s.myPow(x,n);
    return 0;
}