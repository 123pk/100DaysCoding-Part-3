/*
Platform :- Codechef
Contest :- Codechef August Lunchtime 2021
Approach :- We can analyse with some test caase that answer is either 'n' or '1' , we get 'n' when we have all the weight arranged in increasing order from 1 to n with difference 
           W[i] - W[i-1] = 1, else we have '1' connected componenet
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int n;
         cin>>n;
         
         long long A[n];
        // map<int,long long>P;
         for(int i=0;i<n;++i){
             cin>>A[i];
            // P[i+1]=A[i];
         }
         
         int f=0;
         
         for(int i=1;i<n;++i){
             if(A[i]-A[i-1]!=1){
                 f=1;
                 break;
             }
         }
         if(f)cout<<1<<"\n";
         else cout<<n<<"\n";
      //   cout<<ans<<"\n";
    }
}
