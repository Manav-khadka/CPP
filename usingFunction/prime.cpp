#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <=sqrt(num); i++)
    {
        if(num%i==0)
            {return false;}
        
    }
    return true;
    

}
int main()
{
    int a,b;
    cout<<"enter the range of number:";
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))  //if i is prime then
        {
           cout<<i<<endl; //i will be print
        }
        
    }
    
}