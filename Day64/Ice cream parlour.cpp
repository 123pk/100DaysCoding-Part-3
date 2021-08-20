/*
Platform :- Hackerrank
Approach :- Store the vector of index of occurence of each value in array and now itterate through array and check if both  ( A[i] and target- A[i] )are present as they will add
            up to 'target' value then print the index , if both are same then check if they are present in array more than once or not if yes print the first two index in 
            increasing order.
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>m>>n;
        
        int A[n];
        map<int,vector<int>>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]].push_back(i+1);
        }
        int start=0,end=0;
        for(int i=0;i<n;++i){
            int temp = m-A[i];
            if(temp==A[i]){
                if(P[temp].size()>1){
                    start = P[temp][0];
                    end = P[temp][1];
                    break;
                }
            }
            else{
                if(P[temp].size()){
                    start = i+1;
                    end = P[temp][0];
                    break;
                }
            }
        }
        cout<<start<<" "<<end<<"\n";
        
    }
}
