/*
Platform :- Codeforces
Contest :- Codeforces Round 709 Div 2 (based on TEKNO Cup)
Approach :- There are few cases which you need to take care of :- 
          1. if number of different type of ( A[i] - A[i-1]) positive value or negative value is greater than 1 then it never possible to get that array
          2. if there is only one type of (A[i]-A[i-1]) value then there are infinite possible solutions
          3. if n==1 then we print 0  as we have infinte solutions
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
    
        set<long long>temp;
        for(int i=0;i<n;++i){
            cin>>A[i];
            
            if(i){
                long long z = A[i]-A[i-1];
                temp.insert(z);
           }
        }
        
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        
        if(temp.size()>2){
            cout<<"-1\n";
            continue;
        }
        
        if(temp.size()==1){
             cout<<0<<"\n";
        }
        else{
            int c=0;
            long long d = 0;
            for(auto x:temp){
                if(x>=0){
                    c++;
                    d=x;
                }
            }
            
            if(c==0||c==2||d==0)cout<<"-1\n";
            else{
               long long ans=0,mx=0;
               for(auto x:temp){
                   ans+=abs(x);
               }
               
                
               
               int f=0;
               for(int i=0;i<n;++i){
                   if(A[i]>ans){
                       f=1;break;
                   }
                   if(i==0)continue;
                   
                   long long temp = (A[i-1]+d)%ans;
                   if(temp!=A[i]){
                       f=1;
                       break;
                   }
               }
               
               if(f){
                   cout<<"-1\n";
                   continue;
               }
               cout<<ans<<" "<<d<<"\n";
            }
        }
    }
}
