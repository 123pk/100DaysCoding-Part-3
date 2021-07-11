/*
Platform :- Codeforces
Contest :- Codeforces Round 732 Div 2
*/
#include<bits/stdc++.h>
using namespace std;

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int A[n];
        vector<int>P[100001];
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]].push_back(i);
        }
        
        sort(A,A+n);
        int f=0;
        for(int i=0;i<n;++i){
            vector<int>temp=P[A[i]];
            int idx=0;
            for(int j=0;j<temp.size();++j){
                int z=abs(temp[j]-i);
                if(z%2==0){
                    idx=j+1;
                    break;
                }
            }
            
            if(idx==0){
                f=1;break;
            }
            idx--;
            temp.erase(temp.begin()+idx);
            P[A[i]]=temp;
        }
        
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
        
    }
}
