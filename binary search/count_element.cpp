#include <bits/stdc++.h>
#define pb push_back
using namespace std;
void print(vector<int> v)
{
    for (auto c : v)
        cout << c << "\t";
}
int first(vector<int> v, int f,int l,int k){
    int first;
    while (f <= l)
    {
        int mid = (f + l) / 2;
        if (v[mid] == k)
        {
            first = mid;
            l = mid - 1;
        }
        else if (mid > k)
        {
            l = mid - 1;
        }

        else
        {
            f = mid + 1;
        }
    }
    return first;
}
int last(vector<int> v, int f,int l,int k){
    int last;
    while (f <= l)
    {
        int mid = (f + l) / 2;
        if (v[mid] == k)
        {
            last = mid;
            f = mid + 1;
        }
        else if (mid > k)
        {
            l = mid - 1;
        }

        else
        {
            f = mid + 1;
        }
    }
    return last;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int k;
    cin >> k;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }
    // print(v);
    int f = 0;
    int l = n - 1;
    int fi=first(v,f,l,k);
    int li=last(v,f,l,k);
    cout<<li-fi+1<<" ";
}