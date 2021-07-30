/*
Platform :- Codeforces 
Contest :-  Codeforce Educational Round 112
Approach :- let W and H be width and height of room , w1 = abs(x2-x1) and h1 = abs(y2-y1) be the width and height of table present in room 
            let 'a' and 'b' be the width and height of table we want to add in room
            Case 1 :- when it is impossible to insert the table
                    ---> when  (w1 + a)> W and ( h1 + b)>H then we cannot insert the following table and we will print "-1"
            
            Case 2 :- when we can insert the table by moving the table to left ,right ,up or down 
                   ---> we need to move current table from initial position if (( W - max( x2,x1)) < a ) and ( min(x1,x2))<a similarly for 'y1' and y2
                   ---> we will try to move box in all the four directions and will choose one with minimum cost and which will help us fit the box in the room
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         long long W,H;
         cin>>W>>H;
         
         long long x1,x2,y1,y2;
         cin>>x1>>y1>>x2>>y2;
         
         long long a,b;
         cin>>a>>b;
         
         //case 1 we can fit to extreme corner and chef if it is possible to fit the second or not 
         if((a+abs(x2-x1))>W && (b+(abs(y2-y1)))>H){
             cout<<"-1\n";
             continue;
         }
         
         double ans=0;
         
         long long t1=1e18;
         long long tr=W-max(x1,x2);
         long long tl=min(x1,x2);
         
         long long tu=H-max(y2,y1);
         long long td=min(y2,y1);
         
         if((tr<a) && tl<a){
             if(tu<b && td<b){
                  
                  if((a+abs(x1-x2))>W){
                      t1=min(t1,b-tu);
                      t1=min(t1,b-td);
                  }
                  else{
                      if(b+abs(y1-y2)>H){
                          t1=min(t1,a-tl);
                          t1=min(t1,a-tr);
                      }
                      else{
                          if(abs(x2-x1)<W){
                          t1=min(t1,a-tl);
                          t1=min(t1,a-tr);
                          }
                          
                          if(abs(y2-y1)<H){
                              t1=min(t1,b-tu);
                              t1=min(t1,b-td);
                          }
                      }
                  }
             }
             else t1=0;
         }
         else t1=0;
         
         if(t1==1e18)t1=0;
         ans=t1;
         cout<<to_string(ans)<<"\n";
    }
}
