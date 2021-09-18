/*
Platform :- Codeforces
Contest :- Codeforces Round 643 Div 2
Approach :- For each value from 1 to 2n find the smallest index which contains A[i]+1 or higher . We can do so by maintaining an array of size 2n and an last pointer which points
            the last value, if our current value is greater than or equal to last value then we update our index from ( last to B[i] ) . Now for each value from 1 to n we find 
            ans = min(ans , value[A[i]+1] + i)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        long long A[n],B[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
            A[i]--;
        }
        
        for(int i=0;i<n;++i){
            cin>>B[i];
            B[i]--;
        }
        
        int ans=n-1;
        int sz = 2*n;

        vector<int>used(sz);
       
        
        int last = 0;
        for(int i=0;i<n;++i){
            if(i==0){
               for(int j = last;j<=B[i];j++){
                   used[j]=i;
               }
               last = B[i]+1;
            }
            else{
                if(last<=B[i]){
                    for(int j = last;j<=B[i];j++){
                        used[j] = i;
                    }
                    last = B[i]+1;
                }
            }
        }
        
        for(int i=0;i<n;++i){
            ans = min(ans,used[A[i]+1]+i);
        }
        
        cout<<ans<<"\n";
    }
}
