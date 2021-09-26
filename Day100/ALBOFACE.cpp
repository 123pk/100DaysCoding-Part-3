/*
Platform:- Codechef
Contest :- Codechef September Lunch time
Approach :- If you will analyse carefully you will found out for power of 2 >4 , let val = power_of_2 >4 then :-
            1. if val == n then "Alice" wins
            2. if n == val-1 then also "Alice" wins
            3. for val-2 and val-3, "Bob" wins
            
            else for odd values of n we  have "Bob" as winner and for even value we have "Alice"
*/
#include<bits/stdc++.h>
using namespace std;

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long dp[100001];
        dp[0]=0;
        dp[1]=1;
        dp[2]=0;
    
    for(int i=3;i<=100000;++i){
            
            if(i%2){
                if(dp[i-1]==0)dp[i]=1;
                else dp[i]=0;
            }
            else{
              //  string temp=bitset<64>(i).to_string();
               // reverse(temp.begin(),temp.end());
                dp[i]=0;
                long long xx=i;
                while(1){
                    if(xx%2==0){
                        xx/=2;
                        if(dp[xx]==0){
                            dp[i]=1;
                            break;
                        }
                    }
                    else break;
                }
            }
           
            
        }
     int t;
    cin>>t;
    
   while(t--){
        long long n;
        cin>>n;
        
        if(n<100001){
            if(dp[n])cout<<"Alice\n";
            else cout<<"Bob\n";
        }
        else{
            long long temp=2;
            while(temp<n){
                temp*=2;
            }
            
            long long dif=temp-n;
            if(dif<4){
                if(dif<=1)cout<<"Alice\n";
                else cout<<"Bob\n";
            }
            else{
                if(n%2)cout<<"Bob\n";
                else cout<<"Alice\n";
            }
        }
        
    }
     
}
