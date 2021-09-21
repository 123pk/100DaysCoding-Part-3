/*
Platform :- Codeforces
Contest :- Codeforces Educational Round 114
Approach :- There are two options for us in each case either we will choose a value where we have 'value'<x else we choose a 'value' >= 'x' , so we do binary search and will
            find the value just greater or equal than 'x' and biggest value >'x' we can use 'binary_search' or "set.lower_bound()" in c++ to do so in "logN" time.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int n;
        cin>>n;
        
        long long A[n];
        long long tot=0;
        set<long long>temp;
        for(int i=0;i<n;++i){
            cin>>A[i];
            tot+=A[i];
            temp.insert(A[i]);
        }
        
        int q;
        cin>>q;
        
        long long ans=0,z=0,x,y,zz=0,d=0,temp2=0,temp1=0;
        int f=0;
        for(int i=0;i<q;++i){
            
            cin>>x>>y;
            z=0;
            ans=0;
            f=0;
            auto it = temp.lower_bound(x);
            if(it==temp.end())it--;
            else{
                if((*it)>x){
                     zz = *it;
                    if(it!=temp.begin()){
                        it--;
                        
                         d = abs(*it-x);
                        
                         temp2 = tot-zz;
                        temp2=max(0ll,y-temp2);
                         temp1 = d+max(0ll,y-(tot-(*it)));
                        
                        ans=min(temp1,temp2);
                        f=1;
                    }
                }
            }
           if(f){
               cout<<ans<<"\n";
               continue;
           }
           z=tot-*it;
            if((*it)<x){
                ans+=(x-(*it));
            }
            
            if(z<y){
                ans+=(y-z);
            }
            
            cout<<ans<<"\n";
        }
    
}
