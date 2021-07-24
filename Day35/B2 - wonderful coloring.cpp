/*
Platform :- Codeforces
Contest :- Codeforces Round 734 Div 3
Approach :- we will find frequency of each elemnt of array and the frequecy of element is >=k then we will color 'k' of those with each of 'k' colors else if 
           frequency is <k then we will create a vector where we will push 'c' times that element in array , at the end we will distribute equal number of elements between
           'k' colors
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int A[n];
        map<int,int>P;
        vector<int>idx[n+1];
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]]++;
            idx[A[i]].push_back(i);
        }
        vector<int> valid(n+1);
        int c=0;
        vector<int>ans(n);
        vector<int>sep;
        for(auto &x:P){
           // if we have an element with frequency >= k then we can color with all of 'k' colors each 
            if(x.second>=k){
                int z=x.first;
                valid[z]=1;
            }
            else{
                for(int i=0;i<idx[x.first].size();++i){
                    sep.push_back(idx[x.first][i]);
                }
               c+=x.second;    
            } 
        }
        
       
        
        int j=1;
        for(int i=0;i<n;++i){
            if(valid[A[i]]<=k  && valid[A[i]]>0){
                ans[i]=valid[A[i]];
                valid[A[i]]++;
            }
            else if(valid[A[i]]>k){
                ans[i]=0;
            }
        }
               
        // equalling diving c elements between k colors
        c/=k;
        
        
        if(c){
            int j=1,d=0;
            for(int i=0;i<sep.size();++i){
                if(j==k){
                    ans[sep[i]]=j;
                    j=1;
                    d++;
                }
                else {
                    ans[sep[i]]=j;
                    j++;
                }
                if(d==c)break;
            }
        }
        
        for(auto &x:ans)cout<<x<<" ";
        cout<<"\n";
    }
}
