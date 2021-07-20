/*
Platform :- Codeforces 
Contest :- Codeforces Round 640 Div 4
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int A[n];
        int pref[n];
        vector<int>P(n+1);
     //   map<int,int>P,Q;
        
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        for(int i=0;i<n;++i){
            if(i==0)pref[i]=A[i];
            else pref[i]=pref[i-1]+A[i];
            if(i>=1 &&pref[i]<=n)P[pref[i]]++;
        }
        int ans=0;
        
        for(int i=0;i<n;++i){
            for(int j=i+2;j<n;++j){
                if(pref[j]-pref[i]<=n){
                    int temp=pref[j]-pref[i];
                    P[temp]++;
                }
            }
            
        }
        
        for(auto &x:A){
            if(P[x]>0)ans++;
         }
        
        
        cout<<ans<<"\n";
    }
}
