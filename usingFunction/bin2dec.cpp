#include <bits/stdc++.h>
using namespace std;
int bin2dec(int n){
    int last_digit,dec_val=0,base=1;
    while (n!=0)
    {
        last_digit=n%10;
        n/=10;
        dec_val+=last_digit*base;
        base*=2;
    }
    return dec_val;
    
}

int main()

{
    int bin;
    cout<<"enter binary number";
    cin>>bin;
    cout<<bin2dec(bin)<<endl;
    return 0;

}
//111=1 x 2^2 + 1 X 2^1 + 1 X 2^0