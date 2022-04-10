#include<iostream>
using namespace std;

bool isPrime(int n){
    int count = 0;

    // 0, 1 negative numbers are not prime
    if(n < 2)
        return false;
    
    // checking the number of divisors b/w 1 and the number n-1
    for(int i = 2;i < n; i++) 
    { 
        if(n % i == 0) 
            return false;
    }
    
    // if reached here then must be true
    return true;
}

int main()
{
    int lower, upper;
    
    cout << "Enter lower and upper ranges : "; cin >> lower >> upper;
    
    for(int i = lower; i <= upper; i++)
        if(isPrime(i))
            cout << i << " ";

}
// Time Complexity : O(N^2)
// Space Complexity : O(1)