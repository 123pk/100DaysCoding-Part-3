/*
Platform :- CSES
Approach :- Used segment tree to update and answer query efficiently
Resources :- Blog on segment tree [ https://cp-algorithms.com/data_structures/segment_tree.html ]
             Youtube [ https://www.youtube.com/watch?v=2FShdqn-Oz8 ]
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long

//filling my segment tree
void make_Seg_tree(vector<pair<int,pair<int,int>>>& A,int idx){
    
    for(int i=idx;i>=0;--i){
        A[i].first = A[2*i+1].first + A[2*i+2].first;
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
    int val = query(A,lo_lim,up_lim,2*idx+1) + query(A,lo_lim,up_lim,2*idx+2);
    return val;
}


//doing updates in  my segment tree
void update(vector<pair<int,pair<int,int>>>& A, int idx ,int val){
    A[idx].first = val;
    idx=(idx-1)/2;
    while(1){
     //   cout<<idx<<" "<<(idx*2+1)<<" "<<(idx*2)<<endl;
        A[idx].first = A[idx*2 + 1].first + A[idx*2+2].first;
        if(idx==0)break;
        idx=(idx-1)/2;
    }
}

int32_t main(){
   
     
     int n,q;
     cin>>n>>q;
     
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
     for(int j=(d-x)-n;j<(d-x);++j){
          cin>>seg_tree[j].first;
     }
     
     //initialising range of each node
     for(int i=(d-x)-n;i<d;++i){
         seg_tree[i].second={i,i};
     }
     
     // making my segment tree
     make_Seg_tree(seg_tree,(d-x)-n-1);
     
     
       //checking the segment tree
       /*cout<<"before update ";
     for(auto &x:seg_tree){
         cout<<(x.first)<<" "<<(x.second.first+1)<<" "<<(x.second.second+2)<<endl;
     }
     cout<<endl;*/
     
     int start = (d-x)-n;
     for(int i=0;i<q;++i){
         int x;
         cin>>x;
          
         int l,r;
         cin>>l>>r;
         l--;
        
         l+=start;
         
         if(x==1){
             update(seg_tree,l,r);
             continue;
         }
         r--;
         r+=start;
         cout<<query(seg_tree,l,r,0)<<"\n";
     }
}
