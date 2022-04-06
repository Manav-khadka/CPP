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
        if ((b[i]>s[i]))
        {
            cout<<"SECOND"<<endl;
        
        }
        else if((b[i]<s[i]))
        {
            cout<<"FIRST"<<endl;
        }
        else if((b[i]==s[i]))
        {
            cout<<"ANY"<<endl;
        }
        
    }
    
    
    return 0;

}