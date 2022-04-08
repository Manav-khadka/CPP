#include <bits/stdc++.h> 
#define fi first 
#define se second 
#define ll long long
#define pb push_back 
#define sz(a) (int)a.size() 
#define crep(i,n) for(int i=0;i<n;i++) 
#define rep(i,x,n) for(int i=x;i<n;i++)
using namespace std; 
using pii=pair<int,int>; 
using vi=vector<int>; 
  
int main(){
    


   
   
     ll sharmajikaldka; cin>>sharmajikaldka;
     while(sharmajikaldka--){
         ll a,b;
         ll i=-1;
         cin>>a>>b;
         if(a%2==0){
             if((a+2)<=b) cout<<a<<" "<<a+2;
             else cout<<i;
             }
         else if(a%3==0){
             if((a+3)<=b) cout<<a<<" "<<a+3;
             else cout<<i;
            
         }
         else {
             if((a+3)<=b) cout<<a+1<<" "<<a+3;
             else cout<<i;
         }
         
         cout<<endl;
     }
}