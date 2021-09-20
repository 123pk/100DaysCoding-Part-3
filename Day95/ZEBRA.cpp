/*
Platform :- Codechef
Contest :- Codechef Cook Off September 2021
Approach :- create an array of index where each adjacent value contain different character, now while choosing the index greedilly choose the index which should be inserted in
            the array as we want the max index we can have , now take in account the case when 'k' is even or odd and the size of the index array.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        string s;
        cin>>s;
        
        vector<int>temp;
        temp.push_back(1);
        char ch=s[0];
        for(int i=1;i<n;++i){
            if(s[i]!=ch){
                temp.push_back(i+1);
                ch=s[i];
            }
            else temp[temp.size()-1]=i+1;
        }
        
        if((temp.size()-1)<k)cout<<"-1\n";
        else{
            int ans=0;
            int m = temp.size();
            if(k%2){
                if(m%2)m--;
            }else{
                if(m%2==0)m--;
            }
           // cout<<m<<" ";
            ans=temp[m-1];
             
            
            cout<<ans<<"\n";
        }
    }
}
