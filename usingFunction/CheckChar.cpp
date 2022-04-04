#include <iostream>
using namespace std;
void check(char ch)
{
    if ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
       cout<<"Character";
    }
    else
    {
        cout<<"not character";
    }
    
}

int main()

{
    char ch;
    cin>>ch;
    check(ch);
    return 0;

}