/*
Platform :- Codeforces 
Contest :- Codeforces Round 627 Div 2
Problem :- B - Love song
Approach :- We can store occurence of each word of alphabet at each index of string , as there are 26 alphabets our time complexity will  be O(n*26) which will work,
            now for each [l,r] we will find two array one storing occurence of each alphabet at index 'l' and other at 'r', we will find [ Ar[i] - Al[i]] which will give us 
            occurenece of each alphabet in range [l,r], now we will run a loop from 'a' to 'z' and update our answer by [ count*(index_of_corresponding_letter_in_alphabet)]
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,q;
   cin>>n>>q;
   
   string s;
   cin>>s;
   
   vector<vector<int>>P;
   vector<int>temp(26);
   for(int i=0;i<s.size();++i){
       temp[s[i]-'a']++;
       P.push_back(temp);
   }
   
   map<char,int>Q;
   for(char ch='a';ch<='z';++ch){
       Q[ch]=(ch-'a')+1;
   }
   
   for(int i=0;i<q;++i){
       int l,r;
       cin>>l>>r;
       l--;
       r--;
       vector<int>x=P[r];
      if(l){
          vector<int>y=P[l-1];
          for(int j=0;j<26;++j){
              x[j]-=y[j];
          }
      }
      
      long long ans=0;
      for(int j=0;j<26;++j){
          if(x[j]){
              ans+=(x[j]*(j+1));
          }
      }
      cout<<ans<<"\n";
   }
}
