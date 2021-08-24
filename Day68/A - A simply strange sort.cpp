/*
Platform :- Codeforces
Contest :- Codeforces Round 740 Div 2 Based on VK CUP
Approach :- Bruteforce try swapping odd position and even position till the time arrray is not sorted
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
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        int ans=0,f=0;
        for(int j=1;j<n;++j){
           //     cout<<A[j]<<" ";
                if(A[j]<A[j-1]){
                    f=1;break;
                }
            }
            
            if(f==0){
                cout<<"0\n";
                continue;
            }
            
        while(1){
             f=0;
             
            int i;
            int lim;
            if(ans%2){
                i=1;
                lim=n-2;
            }
            else {
                i=0;
                lim=n-3;
            }
            
            for(;i<=lim;i+=2){
                if(A[i]>A[i+1]){
                    swap(A[i],A[i+1]);
                    
                }
            }
           // cout<<A[0]<<" ";
            for(int j=1;j<n;++j){
              //  cout<<A[j]<<" ";
                if(A[j]<A[j-1]){
                    f=1;//break;
                }
            }
           // cout<<endl;
             ans++;
            if(f==0)break;
           
        }
        
        cout<<ans<<"\n";
    }
}
