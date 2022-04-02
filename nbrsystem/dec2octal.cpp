#include <iostream>
using namespace std;
int dec2oct(int);

int main()

{
    int dec;
    cout<<"enter the decimal value:";
    cin>>dec;
    cout<<"the octal of decimal is "<<dec2oct(dec);


    return 0;

}
int dec2oct(int dec){
    int oct=0;
    int i=1,rem;
    while (dec!=0)
    {
        rem=dec%8;
        dec/=8;
        oct+=rem*i;
        i*=10;

    }
    return oct;
    
}