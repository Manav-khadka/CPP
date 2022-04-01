#include <iostream>
using namespace std;
int power(int, int);

int main()

{
    int base,exp;
    cout<<"enter base:- ";
    cin>>base;
    cout<<"enter exp:-";
    cin>>exp;
    

    cout<<"the power of "<<base<<" raise to " <<exp<<" is "<<power(base,exp);
    

    return 0;

}
int power(int base ,int exp)
{
    int result=1;
    for (int i = 1; i <=exp; i++)
    {
        result*=base;
    }
    return result;
}