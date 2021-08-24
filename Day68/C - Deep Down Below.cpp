/*
Platform :- Codeforces
Contest :- Codeforces Contest 740 Div 2 Based on VK Cup
Approach :- For each of ith array find two thing the minimum value required to kill all the monsters and the max value acheived from the ith array , now sort the array based
            on minimum value required in increasing order and then traverse through all the n value if current max value is greater than the minimum value required for cleaing
            ith cave then we increment the max value by the no of monster in that cave because we will be able to kill all of them and gain points equal to monster in array and if
            the max value is less than the minimum required for ith array/cave then we substract sum of length of all arrays which are under the max value .
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<pair<long long,long long>,int>&P,pair<pair<long long,long long>,int>&Q){
    if(P.first.first==Q.first.first)return P.first.second>Q.first.second;
    return P.first.first<Q.first.first;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<pair<pair<long long,long long>,int>>P;
        map<int,vector<int>>A;
        long long start=0,end=0;
        for(int i=0;i<n;++i){
            int k;
            cin>>k;
            start=0,end=0;
            vector<long long>z(k);
            for(int j=0;j<k;++j){
                cin>>z[j];
                if(j==0){
                    start=z[j]+1;
                    end=z[j]+2;
                }
                else{
                    if(end>z[j]){
                        end++;
                    }
                    else{
                        start = (z[j]+1)-j;
                        end=z[j]+2;
                    }
                }
            }
            
            P.push_back({{start,end},k});
        }
        
        sort(P.begin(),P.end(),comp);
        
        long long ans=P[0].first.first,mx=P[0].first.second;
        int len=P[0].second;
        for(int i=1;i<n;++i){
            if(mx>P[i].first.first){
                mx+=P[i].second;
            }
            else{
                mx = P[i].first.second;
                ans = P[i].first.first-len;
            }
            len+=P[i].second;
        }
        
        cout<<ans<<"\n";
    }
}
