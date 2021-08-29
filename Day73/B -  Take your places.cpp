/*
Platform :- Codeforces
Contest :- Codeforces Deltix Round  Div(1+2)
Approach :- let x = no of odd numbers , y = no of even numbers . If abs( x - y) > 1  then it is not possible to do so .
           --> else if ( x == y )  --> then we try to form two case oeoe.. and eoeo.. where o = odd number and e = evne number and find cost of both and store the min in answer
           ---> else if (x > y) then we try eoeo.. else we find cost of converting to oeoe..
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
         int c=0;
         vector<int>odd,eve;
         for(int i=0;i<n;++i){
             cin>>A[i];
             if(A[i]%2){
                 c++;
                 odd.push_back(i);
             }
             else eve.push_back(i);
             
             A[i]=A[i]%2;
         }
         
         int d = n-c;
         int ans=INT_MAX;
         
         if(abs(c-d)>1)cout<<"-1\n";
         else{
             if(c==d){
                 //check for both 01010
                 int o=0,e=0;
                 //cost
                 int c1=0,c2=0;
                 
                 for(int i=0;i<n;++i){
                     if(i%2==0){
                         c1+=abs(i-eve[e]);
                         e++;
                     }
                      
                 }
                 ans=min(ans,c1);
                 
                 //check for 101010
                 o=0,e=0;
                  for(int i=0;i<n;++i){
                     if(i%2){
                         c2+=abs(i-eve[e]);
                         e++;
                     }
                      
                 }
                 ans=min(ans,c2);
             }
             else{
                 if(c<d){
                     //we are going for 0101
                     int o=0,e=0;
                 //cost
                 int c1=0,c2=0;
                 
                 for(int i=0;i<n;++i){
                     if(i%2==0){
                         c1+=abs(i-eve[e]);
                         e++;
                     }
                      
                 }
                 ans=min(ans,c1);
                 
                 }
                 else{
                     //check for 101010
                int o=0,e=0;
                int c2=0;
                  for(int i=0;i<n;++i){
                     if(i%2){
                         c2+=abs(i-eve[e]);
                         e++;
                     }
                      
                  }
                   ans=min(ans,c2);
                 }
             }
             cout<<ans<<"\n";
         }
         
         
    }
}
