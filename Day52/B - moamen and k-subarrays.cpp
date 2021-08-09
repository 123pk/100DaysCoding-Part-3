/*
Platform :- Codeforces 
Contest :- Codeforce Round 737 Div 2
Approach :- make a copy of input array and sort the copy array then compress it ,comrpression means changing large values to smaller values for easy computation .
          As there a 'n' values in array and all are distinct so we can map each value with a small value upto 'n' .
          Now on original array run a loop and if ( compressed_value[A[i]] - compressed_value[A[i-1]] != 1 ) count++ , count is minimum number of subarrays required for sorting
          the array in non decreasing order, initially count =1 .
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        long long A[n],B[n];
      //  int c=1;
        map<long long,int>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            B[i]=A[i];
        }
        
        sort(B,B+n);
        //compress
        int c=1;
        for(int i=0;i<n;++i){
            P[B[i]]=c;
            c++;
        }
        c--;
        int d=1;
        int start=0;
        for(int i=1;i<n;++i){
            if(P[A[i]]-P[A[i-1]]!=1)d++;
        }
        
      //  cout<<d<<" check ";
        if(d<=k)cout<<"Yes\n";
        else cout<<"No\n";
        
    }
}
