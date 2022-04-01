#include <iostream>
using namespace std;
int binary(long long);

int binary(long long bin)

{
    
    long long dec_value=0,last_digit,base=1;
    while (bin!=0)
    {
        last_digit=bin%10;
        bin/=10;
        dec_value+=last_digit*base;
        base=base*2;

        
    }
    
    

    return dec_value;
}
int main()
{
    long long bin;
    
    cout << "enter binary number:";
    cin >> bin;
    
    cout<<"The binary number of "<<bin <<" "<<"is : "<<binary(bin)<<endl;
}