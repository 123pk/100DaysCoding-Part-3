/*
Platform :- Codeforces
Contest :- Codeforces Educational Round 114
Approach :- we try to find the max and min no of equal adjacent pairs that we can form and if 'm' lies between min-max range we print "yes" else "no"
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         long long a,b,c,m;
         cin>>a>>b>>c>>m;
         
         long long mx = (a-1)+(b-1)+(c-1);
         long long A[3] = {a,b,c};
         sort(A,A+3);
         
         if(m>mx)cout<<"NO\n";
         else{
             //we look for the min limit and if the value of m is in between min and max then we print yes
             // else we print no
            
             
             long long mn = (A[0]+A[1]);
             long long zz = (A[2]-mn)-1;
             mn = max(0ll,zz);
             if((mn<=m && m<=mx))cout<<"YES\n";
             else cout<<"NO\n";
         }
    }
}
