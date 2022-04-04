#include <iostream>

using namespace std;
void max(int a, int b, int c)
{
    if (a>b&&a>c)
    {
       cout<<a;
    }
    else if (b>c&&b>a)
    {
        cout<<b;
    }
    else if(c>a&&c>b)
    {
        cout<<c;
    }
}
void min(int a, int b, int c)
{
    if (a<b&&a<c)
    {
       cout<<a;
    }
    else if (b<c&&b<a)
    {
        cout<<b;
    }
    else if(c<a&&c<b)
    {
        cout<<c;
    }
    
}
int main()

{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"max is:";
    max(a,b,c);
    cout<<endl;
    cout<<"min is";
    min(a,b,c);
    cout<<endl;
    return 0;

}