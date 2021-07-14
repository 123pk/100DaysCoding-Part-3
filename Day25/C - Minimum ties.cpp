/*
Platform :- Codeforces
Contest :- Educational round 104
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
         
        
        if(n%2==0){
            int d=n-1;
            vector<int>A(d);
            A[d/2]=0;
            
            for(int i=0;i<d/2;++i){
                A[i]=1;
            }
            for(int i=(d/2)+1;i<d;++i){
                A[i]=-1;
            }
            
            while(1){
                for(auto &x:A)cout<<x<<" ";
                A.pop_back();
                if(A.size()==0){
                    cout<<"\n";
                    break;
                }
            }
        }
        else{
            int d=n-1;
            while(d){
                for(int i=1;i<=d;++i){
                    if(i%2)cout<<1<<" ";
                    else cout<<"-1 ";
                }
                d--;
            }
            cout<<"\n";
        }
    }
}
