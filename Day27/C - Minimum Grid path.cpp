/*
Platform :- Codeforces
Problem :- Minimium Grid path
Contest :- Educational Round 106
Hint :- Min heap , we will try to assign max length to min value
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
        long long ans=1e18,ods=0,evs=0;
        priority_queue<long long ,vector<long long>,greater<long long>>odd,even;
        for(int i=0;i<n;++i){
            cin>>A[i];
            
            if(i%2){
                ods+=A[i];
                odd.push(A[i]);
                if(i>0){
                    
                    long long x=odd.top();
                    odd.pop();
                    
                    long long z1=even.top();
                    even.pop();
                    
                    int zz=(i+1)/2;
                    long long cost=0;
                    cost+=((n-(zz-1))*(z1+x));
                    cost+=((evs-z1)+(ods-x));
                    
                    ans=min(ans,cost);
                    even.push(z1);
                    odd.push(x);
                }
            }
            else{
                evs+=A[i];
                even.push(A[i]);
                if(i>0){
                    
                    long long x=odd.top();
                    odd.pop();
                    
                    long long z1=even.top();
                    even.pop();
                    
                    int zz=(i)/2;
                    int zz2=((i+2)/2);
                    long long cost=0;
                    cost+=((n-(zz-1))*(x));
                    cost+=(n-(zz2-1))*z1;
                    cost+=((evs-z1)+(ods-x));
                    
                    ans=min(ans,cost);
                    even.push(z1);
                    odd.push(x);
                }
            }
            
        }
        
        cout<<ans<<"\n";
    }
}
