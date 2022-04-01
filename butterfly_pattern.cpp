#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        int spaces= 2*n-2*i;
        for ( j = 1; j <spaces; j++)
        {
            cout<<" ";
        }
        for ( j = 1; j <=i; j++)
        {
            cout<<"*";
        }

      
        
        cout<<endl;
        
    }
    for ( i = n; i >= 1; i--)
    {
        for ( j = i; j >=1; j--)
        {
            cout<<"*";
        }
        int spaces=2*n-2*i;
        
        for ( j = spaces; j >1; j--)
        {
            cout<<" ";
        }
        for ( j = i; j >=1; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
}