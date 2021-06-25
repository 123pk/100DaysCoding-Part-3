/*
Platform :- Codeforces
Problem :- F1. Guess the K-th Zero (Easy version)
Contest :- Codeforces Round #719 (Div. 3)
Hint :- Standard Binary search
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    
    while(t--){
        int k;
        cin>>k;
        
        int tot=0;
        int z;
        int lim=20;
        int temp=0,start=1,end=n,mid=(start+end)/2;
        
        int ans=1;
        while(lim && start<=end){
            cout<<"? "<<1<<" "<<mid<<endl;
            cin>>z;
            cout.flush();
            lim--;
            if((mid-z)==k){
                ans=mid;
                 end=mid-1;
                 mid=(start+end)/2;
            }
            else{
                if((mid-z)>k){
                    end=mid-1;
                    mid=(start+end)/2;
                }
                else{
                    start=mid+1;
                    mid=(start+end)/2;
                }
            }
            
        }
        
        cout<<"! "<<ans<<endl;
        cout.flush();
    }
    
    
    
}
