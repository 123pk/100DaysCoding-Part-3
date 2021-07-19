/*
Platform :- Codeforces 
Contest :- Codeforces Round 640 Div 4
Approach :- Bruteforce, take care of previous value eaten and try to find if we can have candies of sum greater than that value of not.
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
        int start=0,end=n-1,c=0;
        for(int i=0;i<n;++i)cin>>A[i];
        
        long long prev=0,tot1=0,tot2=0,d=0;
        while(start<=end){
            long long tot=0;
            int f=0;
            if(c==0){
            while(start<=end){
                tot+=A[start];
                if(tot>prev){
                    f=1;break;
                }
                start++;
            }
            
            }
            else{
                while(end>=start){
                    tot+=A[end];
                    if(tot>prev){
                        f=1;break;
                    }
                    end--;
                }
            }
            
           // cout<<tot<<" "<<f<<" "<<start<<" "<<end<<"\n";
            d++;
            
            if(c==0){
                tot1+=tot;
                prev=tot;
                c=1;
                start++;
            }
            else{
                c=0;
                prev=tot;
                tot2+=tot;
                end--;
            }
            if(f==0){
                break;
            }
        }
        
        cout<<d<<" "<<tot1<<" "<<tot2<<"\n";
    }
}
