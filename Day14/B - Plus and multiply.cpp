/*
Platform :- Codeforces
Contest :- Codeforces Round 729 Div 2
Approach :- let rem=1 we will increment rem by 'a' and will check if (n-rem)%b==0 till the time rem<=n if so we print "Yes" else "No"
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        
        if(b==1){
            cout<<"Yes\n";
        }
        else if(a==1){
            if(n%b==1)cout<<"Yes\n";
            else cout<<"No\n";
        }
        else{
            long long val=1;
            int f=0;
            
            while(val<=n){
                  if((n-val)%b==0){
                      f=1;break;
                  }
                  
                  val*=a;
            }
            
            
            if(f)cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}
