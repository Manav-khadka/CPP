#include <iostream>
using namespace std;
int factorial(int );

int main()

{
    int n;
    cin>>n;
    cout<<factorial(n);
    
    return 0;

}
int factorial(int n){
    int fact=1;
    for (int  i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}