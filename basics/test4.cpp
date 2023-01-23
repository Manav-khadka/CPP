#include <bits/stdc++.h>

using namespace std;

bool sortByVal(const pair<char, int> &a,
               const pair<char, int> &b)
{
    return (a.second < b.second);
}
int main()
{
    string s;

    cin >> s;

    map<char, int> m;

    map<char, int>::iterator itr;

    for (long i = 0; i < s.length(); i++)
        m[s[i]]++;
    // int arr[m.size()];
    vector<pair<char, int>> vec;

    // copy key-value pairs from the map to the vector
    map<char, int>::iterator it2;
    for (it2 = m.begin(); it2 != m.end(); it2++)
    {
        vec.push_back(make_pair(it2->first, it2->second));
    }
    sort(vec.begin(), vec.end(), sortByVal);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << ": " << vec[i].second << endl;
    }
    // cout << "\nMin Element = "
    //      << *min_element(a.begin(), a.end());
    cout << vec[vec.size() - 1].second - vec[0].second;

    // Find the max element
    // cout << "\nMax Element = "
    //      << *max_element(a.begin(), a.end());
    // for (itr = m.begin(); itr != m.end(); itr++)
    //     cout << itr->first << " " << itr->second << endl;
}
