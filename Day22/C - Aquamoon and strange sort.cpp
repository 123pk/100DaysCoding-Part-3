/*
Platform :- Codeforces
Contest :- Codeforces Round 732 Div 2
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
        vector<int>P[100001];
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]].push_back(i);
        }
        
        sort(A,A+n);
        int f=0;
     //   set<int>used;
        for(int i=0;i<n;++i){
            int d=0;
            int idx=0;
            for(auto &x:P[A[i]]){
                int z=abs(x-i);
                if(z%2==0){
                    idx=d+1;
                    break;
                }
                d++;
            }
            
            if(idx==0){
                f=1;break;
            }
             idx--;
            P[A[i]].erase(P[A[i]].begin()+idx);
        }
        
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
        
    }
}
