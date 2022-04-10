#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
       fact=fact*i;

    }
    return fact;
    
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