/*
Platform :- Codechef
Contest :- Codechef August Cookoff 2021
Approach :- If you will analyse the problem carefully you will find that we have three cases ,
            Case 1 :- we have element more than 1 element with abs(x)>1 , as that will lead to infinte array and it cannot be closed 
            Case 2 :- We have atleast two negative values and one of them is ( less that -1 ) , this will also create infinte array and cannot be closed
            Case 3 :- If we have more than two (-1) then we need atleast one (1) positive one else array cannot be closed
            Case 4 :- In all othe case we have a closed array
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
       int n;
       
       cin>>n;
       
       int A[n];
       int c=0,d=0,e=0,f=0;
       for(int i=0;i<n;++i){
           cin>>A[i];
           if(abs(A[i])>1)c++;
           //P[A[i]]++;
           if(A[i]==-1)f++;
           if(A[i]>0)d++;
       }
       
       if(c>1 || (c  && f))cout<<0<<"\n";
       else {
           if(f>1 && d==0)cout<<"0\n";
           else cout<<"1\n";
       }
    }
}
