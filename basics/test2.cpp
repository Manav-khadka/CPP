#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    cin >> n;
    int arr[n];

    int out = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        while (arr[i] > 0)
        {
            if (arr[i] % 10 == k)
            {
                out++;
            }
            arr[i] /= 10;
        }
    }

    cout << out;

    return 0;
}
