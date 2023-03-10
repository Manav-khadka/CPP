#include<bits/stdc++.h>
using namespace std;
int find(int N,int start,int end , int arr[]){
     while (start<=end)
    {
       int mid=start+(end-start)/2;
       int prev=(mid+N-1)%N;
       int next=(mid+1)%N;
       if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
        return mid;
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
int binaryS(int start,int end, int k,int arr[])
    {
        while (start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==k) return mid;
            else if(arr[mid]>k){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return -1;

    }


int main()
{
    int k;
    k=5;
    int N=5;
    int arr[5]={4,5,6,2,3};
    int start=0;
    int end=N-1;
int min=find(N,start,end,arr);
int fs=min,fe=end;
int ss=start,se=min-1;
int fbinS=binaryS(fs,fe,k,arr);
int sbinS=binaryS(ss,se,k,arr);
    
    if(fbinS!=-1) cout<<fbinS;
    else cout<<sbinS;

}