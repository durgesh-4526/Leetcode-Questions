#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        int n = 0;
        while (x != 0)
        {
            n = n * 10 + (x % 10);
            x = x / 10;
        }
        if (n > INT_MAX || n < INT_MIN)
            return 0;
        return n;
    }
};
int main()
{
    int n = 123;
    Solution s;
    s.reverse(n);
    return 0;
}