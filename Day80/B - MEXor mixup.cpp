/*
Platform :- Codeforces
Contest :-Codefoces Contest 742 Div 2
Approach :- Compute the xor values from 0 to 3*(10^5) and store it in array , then for given input a,b we need to have atleast 'a' elements in our array , let val be the xor
            of all value from 0 to 'a' , if (val == 'b') then our answer is 'a' else we will check if ( val xor a)==b then we need to add two more elements to our array else we
            need to add just one more element in our array.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long pre[400001];
     for(int i=0;i<400001;++i){
             if(i==0)pre[i]=0;
             else pre[i] = pre[i-1] xor i;
    }
        
    int t;
    cin>>t;
    while(t--){
         int a,b;
         cin>>a>>b;
         
         long long temp = pre[a-1];
         int ans = a;
        
         
         if(temp!=b){
            long long z = temp xor a;
            if(z==b)ans+=2;
            else ans++;
         }
         cout<<ans<<"\n";
    }
}
