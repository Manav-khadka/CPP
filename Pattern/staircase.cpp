#include <iostream>
using namespace std;
void staircase (int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i; j < (n-1) ; j++)
            cout << " ";
        for (int k = 0 ; k < (i+1) ; k++)
            cout << "#";
        cout << "\n";
    }
}
int main()
{
    int n;
    // cout << "Enter the height of the required staircase pattern: ";
    cin >> n;
    // cout << "The staircase pattern is as follow: " << endl;
    staircase(n);
    return 0;
}