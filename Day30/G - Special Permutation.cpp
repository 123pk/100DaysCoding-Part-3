/*
Platform :- Codeforces 
Contest :- Codeforces Round 640 Div 4
Approach :- we need to find permutaion of 'n' such that adjacent element has difference between 2 and 4 inclusive , we can always do so by printing all odd values <=n
            and then 4 2 and rest of even number .
            If 'n'<=3 it is not possible
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        if(n<=3)cout<<"-1\n";
        else{
            int lo=n,le=n;
            if(n%2==0)lo=n-1;
            else le=n-1;
            
            while(lo>0){
                cout<<lo<<" ";
                lo-=2;
            }
            
            cout<<"4 2 ";
            int z=6;
            while(z<=le){
                cout<<z<<" ";
                z+=2;
            }
            cout<<"\n";
        }
    }
}
