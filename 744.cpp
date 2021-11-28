#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int temp = target;
        char ans = letters[0];
        for (int i = 0; i < letters.size()-1; i++)
        {
            int a = letters[i];
            if(a > temp)
            {
                ans = letters[i];
                break;
            }
        }
        cout<<ans;
        return ans;
    }
};
int main()
{
    vector<char> letters = {'c','f','j'};
    char target = 'g';
    Solution sol;
    sol.nextGreatestLetter(letters,target);
    return 0;
}