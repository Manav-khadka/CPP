#include<bits/stdc++.h>
using namespace std;
int fact(int nbr){
    int factorial=1;
    for (int i = 0; i < nbr; i++)
    {
        factorial*=nbr;
    }
    return factorial;

}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
        
    }
    return 0;
    
}