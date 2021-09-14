/*
Platform :- Codeforces
Contest :- Codeforces Global Round 16
Approach :- In this problem we make a copy of original array and sort it , now we will assign the row in which that element will belong as there are 'n' rows so each element in 
            array will be assigned value between '1' and 'n' inclusive . Now we will traverse on original array and for each row we will maintain a set which will tell us how many
            elments it already contain and we go through that set and the number of elements which are less than the current element will cause incovenience and we will add that 
            incovenience to our answer, to deal with duplicate values we will maintain a map for each row which will store the frequency of each element in that row.
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long,int>&P,pair<long long,int>&Q){
    if(P.first==Q.first)return P.second<Q.second;
    return P.first<Q.first;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        long long A[m*n];
        vector<map<long long,int>>P(n);
        vector<pair<long long,int>>change;
        for(int i=0;i<(m*n);++i){
            cin>>A[i];
            change.push_back({A[i],i});
        }
        //sorting the array in increasing order 
        sort(change.begin(),change.end(),comp);
        
        int d=0,count=0;
        int sz = n*m;
        vector<int>sid(sz);
        for(int i=0;i<sz;++i){
           //we assign the row to each element of array
            sid[change[i].second]=(d);
            count++;
            if(count==m){
                d++;
                count=0;
            }
        }
        
        long long ans=0;
      
        vector<set<long long>>unq(n);
        
        for(int i=0;i<sz;++i){
            
            if(unq[sid[i]].size()==0){
                P[sid[i]][A[i]]++;
                unq[sid[i]].insert(A[i]);
            }
            else{
               // here we are counting the number of values which are smaller than current value and are already seated
                for(auto &x:unq[sid[i]]){
                    if(A[i]>x)ans+=P[sid[i]][x];
                    else break;
                }
                unq[sid[i]].insert(A[i]);
                P[sid[i]][A[i]]++;
            }
             
        }
  
        cout<<ans<<endl;
  
    }
}
