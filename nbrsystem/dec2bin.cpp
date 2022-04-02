#include <iostream>
using namespace std;
long long  dec2bin(int);

int main()

{
    int dec;
    cout<<"enter decimal number:";
    cin>>dec;
    cout<<"the binary of given decimal number is:  "<<dec2bin(dec)<<endl;
    
    return 0;

}
long long  dec2bin(int dec)
{
    long long bin=0;
    int i=1,rem;
    while (dec!=0)
    {
        rem=dec%2;
        dec/=2;
        bin+=rem*i;
        i*=10;

    }
    return bin;
}