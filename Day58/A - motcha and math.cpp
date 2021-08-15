/*
Platform :- Codeforces
Contest :- Codeforces Round 738 Div 2
Approach :- Convert each value of array into binary string and maintain the frequency of each bit , now for each bit check if it appears 'n' times then ( ans+=pow(2,i))
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
        vector<int>P(64);
        for(int i=0;i<n;++i){
            cin>>A[i];
            string temp = bitset<64>(A[i]).to_string();
            reverse(temp.begin(),temp.end());
            for(int j=0;j<64;++j){
                P[j]+=(temp[j]-'0');
            }
        }
        
        long long ans=0;
        for(int i=0;i<64;++i){
            if(P[i]==n){
                ans+=pow(2,i);
            }
        }
        cout<<ans<<"\n";
    }
}
