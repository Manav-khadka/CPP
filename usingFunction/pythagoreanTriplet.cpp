#include <bits/stdc++.h>
using namespace std;
void pythagorean(int x, int y, int z)
{
    if (x>y&&x>z)
    {
       if ( x*x==y*y+z*z)
       {
           cout<<"pythagorean triplet";
       }
       else
       {
           cout<<"not pythagorean";
       }
       
    }
    else if (y>x&&y>z)
    {
        if ( y*y==x*x+z*z)
       {
           cout<<"pythagorean triplet";
       }
       else
       {
           cout<<"not pythagorean";
       }
        
    }
    else if (z>x&&z>y)
    {
        if ( z*z==y*y+x*x)
       {
           cout<<"pythagorean triplet";
       }
       else
       {
           cout<<"not pythagorean";
       }
    }
    
    
    

}

int main()

{
    int a,b,c;
    cin>>a>>b>>c;
    pythagorean(a,b,c);
    return 0;

}