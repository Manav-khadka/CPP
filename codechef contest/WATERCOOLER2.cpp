#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n],b[n],c[n];
	for (int  i = 0; i <n; i++)
	{
		cin>>a[n]>>b[n];
	}
	// for (int  i = 0; i <n; i++)
	// {
	// 	c[i]=b[i]%a[i];

	
	// }
	for(int i=0;i<n;i++){
		cout<<b[i]%a[i]<<"\n";
	}
	
	return 0;
}
