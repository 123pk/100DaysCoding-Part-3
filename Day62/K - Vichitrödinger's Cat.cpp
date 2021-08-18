/*
Platform :- Codedrills
Contest :- ICPC Gwalior Pune Regionals 2020
Approach :- sort the array and for each index i, the max lenght of such subsequence is( min(i, n-(i+1))*2 + 1) for repeating values the max our of all calculated values for their
            index is taken.
*/
#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n];
        long long B[n];
        map<long long,int>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            B[i] = A[i];
       }
        
        sort(A,A+n);
        
        for(int i=0;i<n;++i){
            int temp = n-(i+1);
            int temp2 = i;
            int z = min(temp,temp2)*2 + 1;
            P[A[i]] = max(P[A[i]],z);
        }
        
        for(int i=0;i<n;++i){
            cout<<P[B[i]]<<" ";
        }
        cout<<"\n";
    }
}
