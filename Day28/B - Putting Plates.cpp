/*
Platform :- Codeforces
Contest :- Codeforces Round #733 (Div. 1 + Div. 2, based on VK Cup 2021 - Elimination (Engine))
Approach :-  Bruteforces the conditions
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
       int r,c;
       cin>>r>>c;
       
       int A[r][c];
       for(int i=0;i<r;++i){
               for(int j=0;j<c;++j){
                   A[i][j]=0;
               }
           }
           
       if(r%2 && c%2){
           for(int i=0;i<r;++i){
               for(int j=0;j<c;++j){
                   if(i%2==0 && j%2==0){
                       if(j==0 || j==c-1 ||i==0 ||i==r-1)A[i][j]=1;
                       else A[i][j]=0;
                   }
                   else A[i][j]=0;
                   
               }
           }
       }
       else if(r%2||c%2){
           if(r%2){
               for(int i=0;i<r;++i){
                   for(int j=0;j<c;++j){
                       if(i%2==0) {
                           if(j==0||j==c-1)A[i][j]=1;
                       }
                        
                   }
               }
               
               for(int j=2;j<c-2;j+=2){
                   A[0][j]=1;
                   A[r-1][j]=1;
               }
               
               
               
           }
           else{
              for(int i=0;i<r;++i){
                  for(int j=0;j<c;++j){
                      if((i==0||i==r-1)){
                          if(j%2==0)A[i][j]=1;
                      } 
                  }
              }
              
              for(int i=2;i<r-2;i+=2){
                   A[i][0]=1;
                   A[i][c-1]=1;
               }
           }
       }
       else{
           int f=0;
           for(int j=0;j<c;j+=2){
               A[0][j]=1;
           }
           
           for(int i=2;i<r;i+=2)A[i][0]=1;
           
           for(int j=2;j<c;j+=2)A[r-1][j]=1;
           
           for(int i=r-3;i>1;i-=2)A[i][c-1]=1;
       }
       
       for(int i=0;i<r;++i){
           for(int j=0;j<c;++j)cout<<A[i][j];
           cout<<"\n";
       }
       cout<<"\n";
    }
    
}
