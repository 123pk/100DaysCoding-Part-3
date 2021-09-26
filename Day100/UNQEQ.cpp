/*
Platform:- Codechef
Contest :- Codechef September Lunch time 2021
Approach :- Find a value n*(n+1)/2 which is basically the sum of first 'n' values from 1 to 'n' , if this value is odd then we cannot divide into equal sum values , else
            we take one biggest value and one smallest value in put in one array upto n/2 terms then we push the remaining one in the array 2
*/
#include<bits/stdc++.h>
using namespace std;

 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        long long temp=n*(n+1);
        temp/=2;
        if(temp%2)cout<<"NO\n";
        else{
            cout<<"YES\n";
            int e=n,s=1,f=0;
            vector<int>first,second;
            for(int i=1;i<=n;++i){
                
                if(i%2){
                    if(f)second.push_back(e);
                    else first.push_back(e);
                   
                    e--;
                }
                else {
                    if(f)second.push_back(s);
                    else first.push_back(s);
                    s++;
                }
                if(i==(n/2))f=1;
            }
            
            sort(first.begin(),first.end());
            sort(second.begin(),second.end());
            
            for(auto x:first)cout<<x<<" ";
            cout<<"\n";
            for(auto x:second)cout<<x<<" ";
            cout<<"\n";
        }
    }
}
