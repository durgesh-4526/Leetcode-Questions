#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> s;
        for (int i = 1; i <= n; i++)
        {
            if(i%3 == 0 && i%5 == 0)
            {
                string a = "FizzBuzz";
                s.push_back(a);
            }
            else if(i%3 == 0)
            {
                string b = "Fizz";
                s.push_back(b);
            }
            else if(i%5 == 0)
            {
                string c = "Buzz";
                s.push_back(c);
            }
            else{
                string d = to_string(i);
                s.push_back(d);
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout<<s[i]<<" ";
        }
        return s;    
    }
};
int main()
{
    int n =3;
    Solution s;
    s.fizzBuzz(n);
    return 0;
}