/*
Platform :- Codeforces
Contest :- Educational Round 85
Approach :- We will create a prefix sum array which store the minimum number of bullets require to kill upto ith monster starting from '1' and going to 'n' and for each value
           'i' find the cost of (pref[i-1]+(pref[n-1]-pref[i])+A[i].first)
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long,long long>&P,pair<long long,long long>&Q){
    if((P.second-P.first)==(Q.second-Q.first)){
        return P.first<Q.first;
    }
    return (P.second-P.first)>(Q.second-Q.first);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<pair<long long,long long>>P;
        for(int i=0;i<n;++i){
            long long x,y;
            cin>>x>>y;
            P.push_back({x,y});
        }
        //just for creating circle
        
        long long pref[n];
        long long ans=0,rem=0;
        for(int i=0;i<n;++i){
            if(i==0){
                if(P[n-1].second>=P[i].first){
                    pref[i]=0;
                }
                else{
                   pref[i]=P[i].first-P[n-1].second; 
                }
            }
            else{
                if(P[i-1].second>=P[i].first){
                    pref[i]=pref[i-1];
                }
                else{
                   pref[i]=pref[i-1]+(P[i].first-P[i-1].second); 
                }
            }
        }
        
        long long temp=0;
        for(int i=0;i<n;++i){
           if(i==0){
               temp=P[i].first+(pref[n-1]-pref[i]);
               ans=temp;
           }
           else if(i==n-1){
               temp = P[i].first+pref[i-1];
               ans=min(ans,temp);
           }
           else{
               temp=pref[i-1]+(pref[n-1]-pref[i])+P[i].first;
               ans=min(ans,temp);
           }
        }
        //cout<<"\n";
        
        cout<<ans<<"\n";
    }
}
