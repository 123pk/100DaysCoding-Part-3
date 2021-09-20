/*
Platform :- Codechef
Contest :- Codechef Cook Off September 2021
Approach :- we need to analyse the problem then we will find that there is no solution for 'n'>4 , else we print the following way
            if( i%4 == 0 ) print 0 ,A[i]
            if( i%4 == 0 ) print A[i],0
            if( i%4 == 0 ) print 0,-A[i]
            if( i%4 == 0 ) print -A[i],0
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
        for(int i=0;i<n;++i)cin>>A[i];
        
        //condition when we don't have solution 
        // it is impossible to make combination ofmore than four point 
        
        if(n>4)cout<<"NO\n";
        else{
            cout<<"YES\n";
           for(int i=0;i<n;++i){
             if(i%4==0)
                cout<<A[i]<<" 0\n";
            else if(i%4==1)
                cout<<"0 "<<A[i]<<endl;
            else if(i%4==2)
              cout<<-A[i]<<" 0\n";
           else
             cout<<"0 "<<-A[i]<<endl;
           }
        }
    }
}
