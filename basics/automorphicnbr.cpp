#include<iostream>
using namespace std;

int isAutomorphic(int n){
    
    int square = n * n;
    
    while(n != 0)
    {
        // means not automorphic number
        if(n % 10 != square % 10){
            return 0;
        }
        
        // reduce down numbers
        n /= 10;
        square /= 10;
    }
    // if reaches here means automorphic number
    return 1;
}

int main ()
{
    int n ;
    cin>>n;
    int sq = n * n ;
    
    if(isAutomorphic(n))
        cout << "Num: "<< n << ", Square: " << sq << " - is Automorphic";
    else
        cout << "Num: "<< n << ", Square: " << sq << " - is not Automorphic";
    

}
// Time complexity: O(N)
// Space complexity: O(1)