/*
Platform :- Codeforces
Contest :- Harbour.Space Scholarship Contest 2021-2022 (open for everyone, rated, Div. 1 + Div. 2)
Approach :- we have 3 cases 
           case 1 :- both players score in '?' situation
           case 2:- player 1 scored in '?' and player 2 don't
           case 3:- player 2 scored in '?' and player 1 don't 
           out of all three the minimum games required is our answer
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         string s;
         cin>>s;
         
         int f=0;
         int ans=0,c=0,d=0;
         for(int i=0;i<10;++i){
             if(i%2){
                 if(s[i]!='?')c+=s[i]-'0';
             }
             else{
                 if(s[i]!='?')d+=s[i]-'0';
             }
         }
         
         
         //11 both win all the ?
         int c1=0,c2=0;
         int ans1=0,ans2=0,ans3=0,ans4=0;
         for(int i=0;i<s.size();++i){
             if(i%2){
                 if(s[i]=='?'||s[i]=='1')c1++;
                 ans1++;
                 int temp=(s.size()-1);
                 temp-=i;
                 int temp2=temp;
                 temp2/=2;
                 temp+=1;
                 temp/=2;
                 
                 if((c1>(c2+temp)))break;
                 if((c1+temp2)<c2)break;
             }
             else{
                 if(s[i]=='?'||s[i]=='1'){
                     c2++;
                 }
                 ans1++;
                 int temp=(s.size()-1);
                 temp-=i;
                 int temp2=temp;
                 temp2/=2;
                 temp+=1;
                 temp/=2;
                  
                 if((c2>(c1+temp)))break;
                 if((c2+temp2)<c1)break;
             }
         }
         
         //10
         int c3=c,c4=d;
         c1=0,c2=0;
          for(int i=0;i<s.size();++i){
             if(i%2){
                 if(s[i]=='?'||s[i]=='1')c1++;
                 ans2++;
                 int temp=(s.size()-1);
                 temp-=i;
                 int temp2=temp;
                 temp2/=2;
                 temp+=1;
                 temp/=2;
                 
                 if((c1>(c2+temp)))break;
                 if((c1+temp2)<c2)break;
             }
             else{
                 if(s[i]=='1')c2++;
                 ans2++;
                 int temp=(s.size()-1);
                 temp-=i;
                 int temp2=temp;
                 temp2/=2;
                 temp+=1;
                 temp/=2;
                 if((c2>(c1+temp)))break;
                 if((c2+temp2)<c1)break;
             }
         }
         
         //01
         c1=0,c2=0;
         
          for(int i=0;i<s.size();++i){
             if(i%2){
                 if(s[i]=='1')c1++;
                 ans3++;
                 int temp=(s.size()-1);
                 temp-=i;
                 int temp2=temp;
                 temp2/=2;
                 temp+=1;
                 temp/=2;
                 if((c1>(c2+temp)))break;
                 if((c1+temp2)<c2)break;
             }
             else{
                 if(s[i]=='1'||s[i]=='?')c2++;
                 ans3++;
                 int temp=(s.size()-1);
                 temp-=i;
                 int temp2=temp;
                 temp2/=2;
                 temp+=1;
                 temp/=2;
                 if((c2>(c1+temp)))break;
                 if((c2+temp2)<c1)break;
             }
         }
         ans=ans1;
         ans=min(ans,min(ans2,ans3));
         cout<<ans<<"\n";
    }
}
