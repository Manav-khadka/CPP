/*fibonacci  seriese means first term + second term till n*/


#include<bits/stdc++.h>
using namespace std;
void fibonacci(int n)
{
    int t1=0,t2=1;
    int nexTerm;
    for (int i = 0; i <=n; i++)
    {
        cout<<t1<<endl;
        nexTerm=t1+t2;
        t1=t2;
        t2=nexTerm;
    }
    return;
    

}

int main()
{
    int n;
    cout<<"enter n:-";
    cin>>n;
    fibonacci(n);

    
}