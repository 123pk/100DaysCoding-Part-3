/*
Platform :- Codeforces 
Contest :- Codeforces Round 736 Div 2
Hint :- Use segment tree or sparse table for speed up query time , we will use these data structure to find the gcd of range and for each index we will
        find the max lenght of subarray which have gcd>1.
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
        
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        n--;
        
        // for A[i]%m = A[i+1]%m .. then __gcd(abs(A[i]-A[i+1]),abs(A[i+1]-A[i+2]))>1
        long long sparse_table[n][20];
        for(int i=0;i<n;++i){
            sparse_table[i][0]=abs(A[i+1]-A[i]);
        }
        
        // we completely filled our sparse table 
        for(int i=1;i<=20;++i){
            for(int j=0;j+(1<<i)<=n;++j){
                 
                sparse_table[j][i] = __gcd( sparse_table[j][i-1], sparse_table[j+(1<<i-1)][i-1]);
               
            }
        }
        
        //now we will find the max of it
        int j=0;
        int ans=1;
        for(int i=0;i<n;++i){
            
            //for ith index we will try find the max subarray size which have gcd>1
            while(j<=i){
                int h=floor(log2((i-j)+1));
                long long x = sparse_table[j][h];
                long long y = sparse_table[i-(1<<h)+1][h];
                
                if(__gcd(x,y)==1)j++;
                else break;
            }
            
            ans=max(ans,(i-j)+2);
        }
        cout<<ans<<"\n";
        
    }
}
