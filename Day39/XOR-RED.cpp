/*
Platform :- Codechef
Contest :- Codechef Cook off july 2021
Approach :- We will store the string of each element , then for each bit we will check if ith bit is present in (n+1)/2 times atleast then we will add that bit to our X value
            at the end we will change each values with A[i] xor X and find the OR value
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
        vector<int>B(64);
        for(int i=0;i<n;++i){
            cin>>A[i];
            string temp=bitset<64>(A[i]).to_string();
            reverse(temp.begin(),temp.end());
            
            for(int j=0;j<64;++j){
                B[j]+=temp[j]-'0';
            }
        }
        
        long long val=0;
        string z="";
        for(int i=0;i<64;++i){
            if(B[i]>=((n+1)/2))z+='1';
            else z+='0';
        }
        
        for(int i=0;i<64;++i){
            if(z[i]=='1')val+=pow(2,i);
        }
        
   //     cout<<val<<" check "<<endl;
        long long ans=0;
        for(int i=0;i<n;++i){
            A[i]=A[i] xor val;
           
           if(i)ans=ans | A[i];
           else ans=A[i];
        }
        
        cout<<val<<" "<<ans<<"\n";
    }
}
