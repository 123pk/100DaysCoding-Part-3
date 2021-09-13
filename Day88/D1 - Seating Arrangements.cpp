/*
Platform :- Codeforces
Contest :- Global Round 16
Approach :- as n is 1 for each value we will try to find number of values which already seated , those values will have value less than current value we will use set to find such value
            to take care of duplicates we will use map to store the frequency
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        long long A[m];
        map<long long,int>P;
        for(int i=0;i<m;++i){
            cin>>A[i];
            //P[A[i]]++;
           // P.push_back({i,A[i]});
        }
      //  sort(P.begin(),P.end());
        
        long long ans=0;
       /* vector<long long>Q(n);
        for(int i=0;i<n;++i){
            Q[P[i].first]=P[i].second;
        }
        */
        set<long long>R;
        int d=0;
        for(int i=0;i<m;++i){
            if(i==0){
                R.insert(A[i]);
                P[A[i]]++;
            }
            else{
               // cout<<A[i]<<" -> " ;
                for(auto x:R){
                   // cout<<x<<" ";
                    if(A[i]>x)ans+=P[x];
                    else break;
                }
                //cout<<"\n";
                R.insert(A[i]);
                P[A[i]]++;
            }
        }
        
        cout<<ans<<"\n";
    }
}
