#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;
    int b[n],s[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>b[i]>>s[i];

    }
    for (int i = 1; i <=n; i++)
    {
        if ((b[i]>=s[i]*30))
        {
            cout<<"YES"<<endl;
        
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    
    return 0;

}