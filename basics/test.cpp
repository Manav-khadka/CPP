#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
string checkPalindrome(int n, string s)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return "No";
        }
    }
    return "Yes";
}

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    cout << checkPalindrome(n, s);
    return 0;
}
