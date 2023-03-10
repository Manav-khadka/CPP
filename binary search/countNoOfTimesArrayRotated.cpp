#include<bits/stdc++.h>
using namespace std;
int count1(int N,int start,int end , int arr[]){
     while (start<=end)
    {
       int mid=start+(end-start)/2;
       int prev=(mid+N-1)%N;
       int next=(mid+1)%N;
       if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
        return arr[mid];
       }
       else if(arr[0]<=arr[mid]){
        start=mid+1;

       }
       else{
        end=mid-1;
       }
    }
    return -1;
}
int main()
{
    int N=4;
    int arr[4]={3,3,3,1};
    int start=0;
    int end=N-1;
    cout<<count1(N,start,end,arr);
    

}