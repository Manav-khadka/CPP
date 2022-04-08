#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n],b[n];
	for (int i=1;i<=n;i++) {
	    cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
	    if(a[i]>=b[i]){
	        cout<<"YES"<<"\n";
	    }
	    else if(a[i]<b[i]){
	        cout<<"NO"<<"\n";
	    }
	    
	}
	return 0;
}
