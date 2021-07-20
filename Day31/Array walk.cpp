/*
Platform :- Codeforces 
Contest :- Educational Round 92 
Approach :- move from i=0 to i=k, that is the max we can go , for each index find the max value that can be acheived if we apply back-forth operation at that index
            if no of left operation is less than number of moves for that index then move to right  and add the max values we can have if we only move right in those remaining 
            moves after utilising all the left moves for current index
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k,z;
        cin>>n>>k>>z;
        
        int A[n];
        int pref[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(i)pref[i]=pref[i-1]+A[i];
            else pref[i]=A[i];
        }
        
        long long ans=A[0];
        long long tot=A[0];
        int pass=0;
        for(int i=1;i<n;++i){
            k--;
             
            tot+=A[i];
             
            long long mv=tot;
            
            if(k){
                int rem=2*z;
                if(rem<=k){
                    if(rem==k){
                        mv+=(A[i]+A[i-1])*z;
                    }
                    else{
                        mv+=(A[i]+A[i-1])*z;
                        int rig=i+k-rem;
                        rig=min(n-1,rig);
                        mv+=pref[rig]-pref[i];
                    }
                }
                else{
                    int lef=k/2;
                    mv+=(A[i]+A[i-1])*lef;
                    if(k%2)mv+=A[i-1];
                }
            }
            ans=max(ans,mv);
         
            if(k==0)break;
        }
        
        cout<<ans<<"\n";
    }
}
