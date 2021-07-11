/*
Platform :- Codeforces
Contest :- Codeforces Round #731 Div 3
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        
        if(x1==x2 && x2==x3){
            long long ans=abs(x2-x1)+abs(y2-y1);
            if((y3<max(y2,y1)) && (min(y1,y2)<y3)){
                ans+=2;
            }
            cout<<ans<<"\n";
        }
        else if(y1==y2 && y2==y3){
          long long ans=abs(x2-x1)+abs(y2-y1);
            if((x3<max(x2,x1)) && (min(x1,x2)<x3)){
                ans+=2;
            }
            cout<<ans<<"\n";
        }
        else{
            long long ans=abs(x2-x1)+abs(y2-y1);
            cout<<ans<<"\n";
        }
    }
}
