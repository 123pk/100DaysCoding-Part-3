/*
Platform :- Codeforces
Contest :- Codeforces Educational Round 112
Approach :- we want to choose [  min( max ( ( A[0][i+1]+A[0][i+2]...A[0][n-1]) , ( A[1][0]+A[1][1]+..A[1][i-1]) ) ] for i>=1 and i<=n , 
           we can solve this using prefix and suffix sum in O(1) and for all valid 'i' values we will check 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[2][n];
        for(int i=0;i<2;++i){
            for(int j=0;j<n;++j){
                cin>>A[i][j];
            }
        }
        
        // we will precompute prefix sum of 1st row 
        long long ans=0;
        long long pref[n],suff[n];
        for(int j=0;j<n;++j){
            if(j==0)pref[j]=A[0][j];
            else pref[j]=pref[j-1]+A[0][j];
        }
        
         //and suffix sum of 2nd row
        for(int i=n-1;i>=0;--i){
            if(i==n-1)suff[i]=A[1][i];
            else suff[i]=suff[i+1]+A[1][i];
        }
        
        //now we will traverse from and will find desired value
        ans=1e18;
        for(int i=0;i<n;++i){
            long long xx=0;
            if(i+1<n){
                long long temp=pref[n-1]-pref[i];
                xx=max(xx,temp);
            }
            
            if(i-1>=0){
                long long temp=suff[0]-suff[i];
                xx=max(xx,temp);
            }
            
            ans=min(ans,xx);
        }
       
        cout<<ans<<"\n";
    }
}
