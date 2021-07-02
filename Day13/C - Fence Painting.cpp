/*
Platform :- Codeforces 
Contest :- Codeforces Round 699 Div2
Approach :- first check if our painters can make our A into B array , we count frequecy of color of B where ( A[i] != B[i] ) and compare with frequency of color in C
            array if there is a colour whose frequency in 'B' is > frequency in 'C'  then we will not be able to change .
            
            else we will find the index of each painter accordingly , if we have random painter who paint a color which is not in our 'B' array then we give that painter 
            last index where (A[i] !=B[i]) if this random index if after last index of B[i] in 'C' then we can't paint from A to B.
            
            The explanation is messed up as it took more than 5 submissions before getting AC
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        int A[n];
        set<int>zz;
        for(int i=0;i<n;++i){
            cin>>A[i];
            zz.insert(A[i]);
        }
        
        int B[n];
        int d=0;
        map<int,int>val,ed;
        vector<int>equal(n+1);
        vector<pair<int,vector<int>>>P(n+1);
        for(int i=0;i<n;++i){
            cin>>B[i];
            if(A[i]!=B[i]){
                d++;
                val[B[i]]++;
                 P[B[i]].first=0;
                 P[B[i]].second.push_back(i+1);
            }
            else{
                equal[B[i]]=i+1;
            }
            
        }
        
        int C[m];
        for(int i=0;i<m;++i){
            cin>>C[i];
        }
        
        
        //start from end
         
        vector<int>z(m);
        for(int i=m-1;i>=0;--i){
            if(val[C[i]]){
                ed[C[i]]++;
                z[i]=1;
                val[C[i]]--;
            }
            else{
                 if(equal[C[i]]){
                     z[i]=1;
                 }
            }
        }
 
        
        //if not all value are present in 'C' which are required in 'B'
        int f=0;
        for(auto &x:val){
            if(x.second){
                f=1;
                break;
            }
        }
        
        if(f ||z[m-1]==0)cout<<"NO\n";
        else{
            
            int idx=-1;
            
            
            cout<<"YES\n";
            vector<int>ans(m);
            for(int i=m-1;i>=0;--i){
                if(ed[C[i]]){
                    ed[C[i]]--;
                    int x=P[C[i]].first;
                    if(idx==-1)idx=P[C[i]].second[x];
                   ans[i]=P[C[i]].second[x];
                    P[C[i]].first++;
                }
                else{
                    if(equal[C[i]]){
                        ans[i]=equal[C[i]];
                        if(idx==-1)idx=equal[C[i]];
                    }
                    else ans[i]=idx;
                }
            }
            
            for(auto &x:ans)cout<<x<<' ';
            cout<<"\n";
        }
    }
}
