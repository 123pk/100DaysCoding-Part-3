/*
Platform :- Codeforces
Contest :- Codeforces Round 633 Div 2
Approach :- We maintain a variable "mx" which store the max value and if ( mx > A[i] ) then we store the max differnce possible and minimum power of 2 we need to 
            which is >= max_difference , we update our answer with ( max(ans, max_power_of_2 + 1 )) it. 
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
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
         
        int ans=0,d=0;
        long long dif=0 , mx=A[0];
    
        for(int i=1;i<n;++i){
            if(A[i]<mx){
                
                dif=max(mx-A[i],dif);
                 
                 string temp=bitset<32>(dif).to_string();
                 reverse(temp.begin(),temp.end());
                    
                    int x=0,c=0;
                    for(int j=0;j<32;++j){
                        if(temp[j]=='1'){
                            c++;
                            x=j;
                        }
                    } 
                    ans=max(ans,x+1);
                    //dif = 0;
                
            } 
            mx=max(mx,A[i]);
             
        }
         
        
        cout<<ans<<"\n";
    }
     
}
