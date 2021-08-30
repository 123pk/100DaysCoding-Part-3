/*
Platform :- Atcoder 
Contest :- Atcoder Beginner Contest 216
Approach :- we can go in reverse direction from 'n' to '0' , we can use stack and if ( n % 2 == 1) then we add 'B' in stack and ( n-- ) else we push 'A' and (n /= 2)
            at the end we print all the value of stack .
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
      long long n;
      cin>>n;
      
      stack<char>P;
      while(n){
          if(n%2){
              P.push('A');
              n--;
          }
          else{
              n/=2;
              P.push('B');
          }
      }
      
      while(!P.empty()){
          cout<<P.top();
          P.pop();
      }
      cout<<"\n";
}
