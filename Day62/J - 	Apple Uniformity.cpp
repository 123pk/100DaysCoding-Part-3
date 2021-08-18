/*
Platform :-Codedrills 
Contest :- ICPC Gwalior Pune Regionals 2020
Approach :- it doesnot really matter how big your array is we need to find the min of A[i]-A[i+1] for each query . How to optimise it , we can use set to store difference in sorted 
            order and can get the smallest or min value in O(log N) time which will do the job and we will maintain the frequency array of difference for each unique difference
            If we remove any element we decase the frequency of differnece of this value with its neighbours similarly if we add  new value we add the new differnces and increment
            the frequency
*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n,q;
        cin>>n>>q;
        
        long long A[n];
        map<long long,int>P;
        set<long long>dif;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(i){
                long long z = abs(A[i]-A[i-1]);
                P[z]++;
                dif.insert(z);
            }
        }
        
        for(int i=0;i<q;++i){
            int x;
            long long val;
            cin>>x>>val;
            x--;
            
            long long ans=0;
            if(x==0){
                long long zz = abs(A[x]-A[x+1]);
                P[zz]--;
               if(P[zz]==0)dif.erase(zz);
            }
            else if(x==n-1){
                long long zz = abs(A[x]-A[x-1]);
                P[zz]--;
               if(P[zz]==0)dif.erase(zz);
            }
            else{
                long long zz = abs(A[x]-A[x+1]);
                P[zz]--;
               if(P[zz]==0)dif.erase(zz);
                zz = abs(A[x]-A[x-1]);
                P[zz]--;
               if(P[zz]==0)dif.erase(zz);
            }
              
             
            A[x]=val;
            if(x==0){
                
                long long z = abs(A[x]-A[x+1]);
              //  cout<<z<<" ckedk ";
                P[z]++;
                dif.insert(z);
            }
            else if(x==n-1){
               long long z = abs(A[x]-A[x-1]);
                P[z]++;
                dif.insert(z);
            }
            else{
               long long z = abs(A[x]-A[x+1]);
                P[z]++;
                dif.insert(z);
                z = abs(A[x]-A[x-1]);
                P[z]++;
                dif.insert(z);
            }
            ans = *dif.begin();
            cout<<ans<<"\n";
        }
    }
}
