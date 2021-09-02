/*
Platform:- Codeforces
Contest :- Codeforces Round #643 Div 2
Approach :- if n==s we cann't find any such value and array ,and if ((s-(n-1))-(n-1)<2) condition is satisfied then also we cannot find any value and we need to print "NO"
            else we print yes and out array is (n-1)number of 1's and one s-(n-1) and we cannot have a subarray with value (s-n)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,s;
   cin>>n>>s;
   
   if(n==s ){
       cout<<"No\n";
   }
   else{
       if((s-(n-1))-(n-1)<2){
           cout<<"No\n";
       }
       else{
           cout<<"Yes\n";
           for(int i=1;i<=n;++i){
               if(i==n)cout<<(s-(n-1))<<"\n";
               else cout<<1<<" ";
           }
           cout<<(s-(n))<<"\n";
       }
   }
}
