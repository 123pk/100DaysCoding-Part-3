/*
Platform :- Codeforces
Contest :- Codeforces Round #731 Div 3
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<long long, int> pi;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int A[k];
        priority_queue<pi, vector<pi>, greater<pi> > P;
        for(int i=0;i<k;++i){
            cin>>A[i];
        }
        
        long long B[k];
        long long mn=1e10;
        for(int i=0;i<k;++i){
            cin>>B[i];
            mn=min(mn,B[i]);
        }
        vector<long long> ans(n,1e10);
       set<int>used; 
       for(int i=0;i<k;++i){
            if(B[i]==mn){
                P.push({B[i],A[i]-1});
                
            }ans[A[i]-1]=B[i];
        }
        
        
        while(!P.empty()){
            pair<long long,int>temp=P.top();
            P.pop();
            int x=temp.second;
           //cout<<temp.first<<" * "<<temp.second<<" "<<ans[x]<<endl;
            if(ans[x]>temp.first){
                used.insert(x);
                ans[x]=temp.first;
            }
            
            
            if((x+1)<n){
             //   cout<<ans[x+1]<<" next "<<temp.first+1<<endl;
                if(ans[x+1]>(temp.first+1)){
                    ans[x+1]=temp.first+1;
                    P.push({temp.first+1,x+1});
                    used.insert(x+1);
                }
                else if(used.find(x+1)==used.end()){
                    P.push({ans[x+1],x+1});
                    used.insert(x+1);
                }
            }
            
            if((x-1)>=0){
                //cout<<
                if(ans[x-1]>(temp.first+1)){
                    ans[x-1]=temp.first+1;
                    P.push({temp.first+1,x-1});
                    used.insert(x-1);
                }
                else if(used.find(x-1)==used.end()){
                    P.push({ans[x-1],x-1});
                    used.insert(x-1);
                }
            }
        }
        
        for(auto x:ans)cout<<x<<" ";
        cout<<"\n";
    }
}
