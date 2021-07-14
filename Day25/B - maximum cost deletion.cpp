/*
Platform :- Codeforces
Contest :- Educational Round 111
Approach :- greedily choose substring to be deleted which will increase total cost
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        
        string s;
        cin>>s;
        int ans=0;
        int dif=a+b;
        if(a<=dif){
            ans+=(n*dif);
        }
        else{
            vector<int>temp;
            int d=0;
            char  ch=s[0];
            for(int i=0;i<n;++i){
                if(ch!=s[i]){
                    temp.push_back(d);
                    d=1;
                    ch=s[i];
                    if(i==n-1)temp.push_back(d);
                }
                else{
                    d++;
                    if(i==n-1)temp.push_back(d);
                }
            }
            
            if(temp.size()<3){
               if(temp.size()==1){
                   ans+=(temp[0]*a)+b;
               }
               else{
                   ans+=((temp[0]*a)+(temp[1]*a)+2*b);
               }
            }
            else
            {
            
                 while(temp.size()!=0){
                     if(temp.size()<3){
                         if(temp.size()==1){
                             ans+=(temp[0]*a)+b;
                         }
                         else{
                             ans+=((temp[0]*a)+(temp[1]*a)+2*b);
                         }
                         break;
                     }
                     
                     int mx=0;
                     int idx=0;
                     for(int i=2;i<temp.size();++i){
                         if(mx<(temp[i]+temp[i-2])){
                             idx=i;
                             mx=temp[i]+temp[i-2];
                         }
                     }
                     
                     ans+=(temp[idx-1]*a)+b;
                     int z=temp[idx];
                     temp.erase(temp.begin()+idx);
                     temp.erase(temp.begin()+(idx-1));
                     temp[idx-2]+=z;
                 }
           
            }
        }
        cout<<ans<<"\n";
    }
}
