#include <bits/stdc++.h>
using namespace std;
int sumOfn(int n)
{
    int sum=(n*(n+1))/2;
    return sum;
}

int main()

{
    int n;
    cin>>n;
    cout<<"sum of n term is : "<<sumOfn(n);
    return 0;

}