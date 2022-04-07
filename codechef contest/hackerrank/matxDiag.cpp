#include <bits/stdc++.h>

using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n][n];
  int first=0;
  int second=0;
  int result;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cin>>a[i][j];
  }
  }
  
    for (int i = 0; i < n; i++) {
        first += a[i][i];
        second += a[i][n - i - 1];       
    }
    result=first+second;
    if (result<0)
    {
        result*=-1;
        cout <<result<< endl;

    }
    else {
        cout <<result<< endl;
    }

    
    
 
}
  
  
