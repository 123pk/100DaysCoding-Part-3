/*
Platform :- Codeforces
Contest :- Codeforces Round 732 Div 2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int A[n],B[n];
        vector<int>pos,neg;
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        int z=0;
        int m=0;
        for(int i=0;i<n;++i){
            cin>>B[i];
            z+=(B[i]-A[i]);
            if(B[i]>A[i]){
                m+=(B[i]-A[i]);
                neg.push_back(i);
            }
            if(B[i]<A[i]){
                pos.push_back(i);
            }
        }
        
        if(z==0){
             
            cout<<m<<"\n";
            int i1=0,i2=0;
            for(int i=0;i<m;++i){
                cout<<(pos[i1]+1)<<" "<<(neg[i2]+1)<<"\n";
                A[pos[i1]]--;
                A[neg[i2]]++;
                
                if(A[pos[i1]]==B[pos[i1]])i1++;
                if(A[neg[i2]]==B[neg[i2]])i2++;
            }
        }
        else{
            cout<<"-1\n";
        }
        
    }
}
