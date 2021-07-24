/*
Platform :- Codeforces
Contest :- Codeforces Round 734 Div 3
Approach :- As there are atmax 5 types of characters in string ( 'a','b','c','d' and 'e') for each string we can map it with array which contain detail of frequecy of 
             each character in that string , we will iterate through 'a' to 'e' and for each string we will find ( frequecy of choosen element - sum of frequecy of other element)
             of string and store in array . Now for the array formed we will find the max number of elements of array whose sum is >=0 let it be c1,c2,c3,c4 and c5 for each of 
             5 character the max out of 5 values is our answer
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         
         vector<pair<string,vector<int>>>P;
         for(int i=0;i<n;++i){
             string s;
             cin>>s;
             vector<int>Q(26);
             for(auto&x:s)Q[x-'a']++;
             
             P.push_back({s,Q});
             Q.clear();
         }
         
         vector<int>z;
         z.push_back('a'-'a');
         z.push_back('b'-'a');
         z.push_back('c'-'a');
         z.push_back('d'-'a');
         z.push_back('e'-'a');
         
         int ans=0;
         for(int i=0;i<5;++i){
             
             vector<int>temp;
             for(int j=0;j<n;++j){
                 int x=P[j].second[z[i]];
                 int tot=0;
                 for(int k=0;k<5;++k)tot+=P[j].second[z[k]];
                 tot-=x;
                 temp.push_back(x-tot);
             }
             sort(temp.begin(),temp.end(),greater<int>());
             int j=0,count=0,tot=0;
             while(j<n){
                 tot+=temp[j];
                 if(tot<=0)break;
                 count++;
                 j++;
             }
             ans=max(ans,count);
         }
         
         
         cout<<ans<<"\n";
         
    }
}
