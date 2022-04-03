#include <iostream>
using namespace std;
void prime(int);

int main()

{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    prime(n);
    
    return 0;

}
void prime(int n)
{
    bool flag=0;
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            cout<<"non prime";
            flag=1;
            break;
        }
        
        
    }
    if (flag==0)
    {
        cout<<"prime\n";
    }
    
}