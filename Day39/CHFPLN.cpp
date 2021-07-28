/*
Platform :- Codechef
Contest :- Codechef Cook off july 2021
Problem :- Chef in infinite plane
Approach :- We can analyse that for a given value of 'n' we can have atmax (n-1) disting points in 2-d plane so we will maintain a map to store frequecy of each element
            we will increment our answer if frequecy of that element is less than the value of element
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int A[n];
        map<int,int>P;
        int ans=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]]++;
            
            if(P[A[i]]<A[i])ans++;
        }
        cout<<ans<<"\n";
        
    }
}
