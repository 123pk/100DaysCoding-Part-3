/*
Platform :- Geeksforgeeks
Contest :- Job-A-thon Hiring problem
Approach:- We need to find the max value in range from (i+1 to min(n-1,i+k)) which can be done by using segment tree and find the max in that range and compare with the value at
          ith position , if this value > max_in_range (i+1 ,min(n-1,i+k)) then we increment our answer.
*/
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
 //filling my segment tree
void make_Seg_tree(vector<pair<int,pair<int,int>>>& A,int idx){
    
    for(int i=idx;i>=0;--i){
        A[i].first = max(A[2*i+1].first , A[2*i+2].first);
        A[i].second = {(A[2*i+1].second.first),(A[2*i+2].second.second)};
    }
}

//answering queries of my segment tree
int query(vector< pair< int, pair<int,int>> >& A ,int lo_lim ,int up_lim,int idx){
   
    //in case range of node and target range are disjoint
    if( A[idx].second.first > up_lim || A[idx].second.second < lo_lim){
        return 0;
    }
    
    // if completely overlap
    if(A[idx].second.first>= lo_lim && A[idx].second.second <= up_lim){
        return A[idx].first;
    }
    
    //else we have partial overlapping range
    int val = max(query(A,lo_lim,up_lim,2*idx+1) , query(A,lo_lim,up_lim,2*idx+2));
    return val;
}


//doing updates in  my segment tree
void update(vector<pair<int,pair<int,int>>>& A, int idx ,int val){
    A[idx].first = val;
    idx=(idx-1)/2;
    while(1){
     //   cout<<idx<<" "<<(idx*2+1)<<" "<<(idx*2)<<endl;
        A[idx].first = max(A[idx*2 + 1].first , A[idx*2+2].first);
        if(idx==0)break;
        idx=(idx-1)/2;
    }
}

class Solution {
  public:
    int solve(int n, int K, vector<int> height) {
         
        int ans=0;
        
        int d=0;
     string temp=bitset<32>(n).to_string();
     reverse(temp.begin(),temp.end());
     int c=0;
     
     for(int i=0;i<32;++i){
         if(temp[i]=='1'){
             c++;
             d=i;
         }
     }
     
     if(c>1)d++;
     d=pow(2,d);
     int x=d-n;
     d*=2;
     d-=1;
     
     //this is our seg tree  leaf nodes
     vector<pair<int,pair<int,int>>> seg_tree(d);
     int i=0;
     for(int j=(d-x)-n;j<(d-x);++j){
          seg_tree[j].first=height[i];
          i++;
     }
     
     //initialising range of each node
     for(int i=(d-x)-n;i<d;++i){
         seg_tree[i].second={i,i};
     }
     
     // making my segment tree
     make_Seg_tree(seg_tree,(d-x)-n-1);
     //for(auto x:seg_tree)cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
     int start = (d-x)-n;
     for(int i=0;i<n;++i){
         if((i+K)<n-1){
             int temp = query(seg_tree,i+1+start,i+K+start,0);
             if(height[i]>temp)ans++;
         }
         else{
             int temp = query(seg_tree,i+1+start,d-1,0);
             if(height[i]>temp)ans++;
         }
     }
        
        ans=max(ans,1);
        return ans;
    }
};


// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);

        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;

        cout << ob.solve(N, K, A) << "\n";
    }
    return 0;
}
  // } Driver Code Ends
