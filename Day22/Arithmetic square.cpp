/*
Platform :- Coding competitions with google
Contest :- Kickstart Round D 2021
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int k=1;k<=t;++k){
        cout<<"Case #"<<k<<": ";
        long long A[3][3];
        for(int i=0;i<3;++i){
            for(int j=0;j<3;++j){
                if(i==j &&i==1){
                    A[i][j] = 0;
                }
                else cin>>A[i][j];
            }
        }
        
        int c=0;
        long long z=(A[0][0]+A[2][0]);
        if(z%2==0){
            z/=2;
            if(z==A[1][0])c++;
        }
        
        z=A[2][0]+A[2][2];
        if(z%2==0){
            z/=2;
            if(z==A[2][1])c++;
        }
        
        z=A[0][2]+A[2][2];
        if(z%2==0){
            z/=2;
            if(z==A[1][2])c++;
        }
        
        z=A[0][0]+A[0][2];
        if(z%2==0){
            z/=2;
            if(z==A[0][1])c++;
        }
        
        //choosing the middle value
    map<long long,int>P;
       z=A[0][0]+A[2][2];
       if(z%2==0){
           z/=2;
           P[z]++;
       }
       
       z=A[1][0]+A[1][2];
       if(z%2==0){
           z/=2;
           P[z]++;
       }
        
        z=A[2][0]+A[0][2];
        if(z%2==0){
            z/=2;
            P[z]++;
        }
        
        z=A[0][1]+A[2][1];
        if(z%2==0){
            z/=2;
            P[z]++;
        }
        
        int mx=0;
        for(auto x:P)mx=max(mx,x.second);
        c+=mx;
        cout<<c<<"\n";
    }
}
