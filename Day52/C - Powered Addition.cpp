/*
Platform :- Codeforces
Contest :- Codeforces Round 633 Div 2
Approach :- We maintain a variable "mx" which store the max value and if ( mx > A[i] ) then we store the max differnce possible and minimum power of 2 we need to 
            which is >= max_difference , we update our answer with ( max(ans, max_power_of_2 + 1 )) it. 
*/
#include<bits/stdc++.h>
using namespace std;

void dfs(map<int,vector<int>>&P ,vector<int>&used, vector<int>&ans ,int idx){
    
    if(P[idx].size()==0){
        return;
    }
     ans.push_back(idx);
    for(int i=0;i<P[idx].size();++i){
        if(used[P[idx][i]]==0){
            used[P[idx][i]]=1;
            dfs(P,used,ans,P[idx][i]);
            ans.push_back(idx);
        }
    }
    
}

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
        long long dif=0;
        long long mx=A[0];
        long long pv_dif=0;
        for(int i=1;i<n;++i){
            if(A[i]<mx){
                dif=max(mx-A[i],dif);
                 
                if(i==n-1){
                     
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
                    dif = 0;
                }
            }
            else{
                if(dif){
                     
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
                    dif = 0;
                }
            }
            mx=max(mx,A[i]);
             
        }
         
        
        cout<<ans<<"\n";
    }
     
}
