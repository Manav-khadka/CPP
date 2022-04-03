#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if (n==0)
    {
        return 1;
    }
    
    return n*factorial(n-1);
    
}
int strongnbr(int num){
    int digit,sum=0;
    int temp=num;//sum has same value remained the value of temp will change
    while (temp!=0)
    {
        digit=temp%10;//we  have to find every single digit's fatorial
        sum=sum+factorial(digit);
        temp/=10;


    }
    return sum == num;
    

}
int main()

{
    int num;
    cin>>num;
    if (strongnbr(num))
    
        cout<<"strong number\n";
    
    else
    
        cout<<"non strong number\n";
    
    
    
    return 0;

}