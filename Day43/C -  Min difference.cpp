/*
Platform :- Atcoder
Contest :- Atcoder Beginner contest 212
Approach :- If you carefully analyse the problem it is same as merging two sorted arrays ,  we need to sort given array first then we will find min differece
            between adjacent element of differnt type ( different arrays )
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    long long A[n],B[m];
    for(int i=0;i<n;++i)cin>>A[i];
    for(int i=0;i<m;++i)cin>>B[i];
    
    sort(A,A+n);
    sort(B,B+m);
    
    int i=0,j=0;
    int last=0;
    vector<pair<long long,int>>temp;
    while(i<n || j<m){
        if(i==n){
            temp.push_back({B[j],2});
            break;
        }
        else if(j==m){
            temp.push_back({A[i],1});
            break;
        }
        else{
            if(A[i]<B[j]){
                 
                temp.push_back({A[i],1});
                i++;
            }
            else {
                temp.push_back({B[j],2});
                j++;
            }
        }
    }
    
    long long ans=1e18;
    //cout<<temp[0]<<" ";
    for(int i=1;i<temp.size();++i){
        if(temp[i].second!=temp[i-1].second){
            ans=min(ans,temp[i].first-temp[i-1].first);
        }
    }
  //  cout<<endl;
    cout<<ans<<"\n";
}
