/*
Platform :- Codeforces 
Contest :- Codeforces Roun 605 Div 3
Approach :- for a index 'i' we try to find the max length of increasing subarray till 'i' and max length of increasing subarray till 'i+2' such that A[i]<A[i+2]
*/
#include<bits/stdc++.h>
using namespace std;

 

int main(){
    int n;
    cin>>n;
    
    long long A[n];
    for(int i=0;i<n;++i){
        cin>>A[i];
    }
    
    int ans=0;
    vector<int>pref(n),suff(n);
    int c=1;
    pref[0]=1;
    int g=0;
    for(int i=1;i<n;++i){
        if(A[i]>A[i-1]){
            c++;
        }
        else{
            c=1;
        }
        pref[i]=c;
    }
    c=1;
    suff[n-1]=1;
    for(int i=n-2;i>=0;--i){
        if(A[i]<A[i+1]){
            c++;
        }
        else{
            c=1;
        }
        suff[i]=c;
    }
    
    for(int i=0;i<n;++i){
        if(i<n-2){
        int temp=1;
        if(A[i]<A[i+2])temp=pref[i]+suff[i+2];
        ans=max(ans,temp);
        ans=max(ans,pref[i]);
        ans=max(ans,suff[i]);
        }
        else{
            ans=max(ans,pref[i]);
            ans=max(ans,suff[i]);
        }
    }
    
    cout<<ans<<"\n";
     
}
