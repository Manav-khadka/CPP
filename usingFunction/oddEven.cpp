#include<bits/stdc++.h>
using namespace std;
void checkOddEven(int n)
{
    if(n%2==0){
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    
}
int main()
{
    int n;
    cin>>n;
    checkOddEven(n);
    cout<<endl;
    
}