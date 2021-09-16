/*
Platform :- Codechef
Contest :- Codechef starters 11
Approach :- We  have array [1,2,3,4....n], The sum of 'n' elements for this type of array is (n*(n+1))/2 , if we will remove 's' from it we will get a value , let it be 'x' is ( 1 <= 'x' <= n) then print 'x' 
            else  solution don't exist and print '-1'
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n,s;
        cin>>n>>s;
        
        long long z =n;
        z*=(n+1);
        z/=2;
        z-=s;
        long long ans=-1;
        if(1<=z && z<=n)ans=z;
        cout<<ans<<"\n";
    }
}
