//To find binary coefficient nCr which is n! /((n-r)! x r!)

#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact*=i;
    }
    return fact;
    
}
int nCr(int a, int b)
{
    int binaryCoeff;
    binaryCoeff=factorial(a)/(factorial(a-b)*factorial(b));
    return binaryCoeff;

}

int main()

{
    int n,r;
    cin>>n>>r;
    cout<<factorial(n)/(factorial(n-r)*factorial(r));
    return 0;

}