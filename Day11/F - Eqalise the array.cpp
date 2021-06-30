/*
Platform :- Codeforces
Contest :- Codeforces Round #702 (Div. 3)
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
        long long tot=0;
        map<long long,int>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            tot+=A[i];
            P[A[i]]++;
        }
        
        sort(A,A+n);
        map<long long,int>Q;
        for(auto &x:P)Q[x.second]++;
        
        vector<pair<long long,int>>R;
        for(auto &x:Q){
            R.push_back({x.first,x.second});
        }
        
        sort(R.begin(),R.end());
        
        long long ans=1e18;
        long long before = 0;
        for(int i=0;i<R.size();++i){
            long long temp=before;
            long long z=0;
            for(int j=i+1;j<R.size();++j){
                z+=(R[j].first-R[i].first)*R[j].second;
            }
            temp+=z;
            ans=min(ans,temp);
            before+=(R[i].first*R[i].second);
        }
        
        cout<<ans<<"\n";
        
    }
}
