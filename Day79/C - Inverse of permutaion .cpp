/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 217
Approach :- Bruteforce create a new array and make A[p[i]] = i;
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int>ans(n);
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        x--;
        ans[x]=i+1;
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
}
