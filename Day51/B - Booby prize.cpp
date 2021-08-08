/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 213
Approach :- Make vector of pair of array element and index and sort accoring to value of array element 
            print the index of second last element is sorted in ascending order .
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     vector<pair<long long,int>>P;
     int n;
     cin>>n;
     
     for(int i=0;i<n;++i){
         long long x;
         cin>>x;
         
         P.push_back({x,i+1});
     }
     sort(P.begin(),P.end());
     
     cout<<P[P.size()-2].second<<"\n";
}
