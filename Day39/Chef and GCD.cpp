/*
Platform :- Codechef
Contest :- Codechef Cook off July 2021
Approach :- We can clearly see that the max no of operations that we need to apply is '2' , we can always make both of them even and gcd of even number is 2 which is >1
           Case 1:- if gcd(x,y) >1 we don't have to do anything
           Case 2:- if any one is even then we need atamax '1' operation we can change odd value to even in one operation
           Case 3 :- if we increment y--> (y+1) and gcd(x,y) >1 or vice versa then also we only have to do one operation
           Case 4: else we need 2 operations
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long x,y;
        cin>>x>>y;
        
        if(__gcd(x,y)>1){
            cout<<0<<"\n";
            continue;
        }
        
        
        long long temp1=min(x,y),temp2=max(y,x);
        int ans=2;
        if(temp1%2==0 || temp2%2==0)ans=1;
        else{
            if(__gcd(temp2+1,temp1)>1 || __gcd(temp2,temp1+1)>1)ans=1;
        }
        
        cout<<(ans)<<"\n";
    }
}
