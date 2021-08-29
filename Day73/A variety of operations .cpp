/*
Platform :- Codeforces
Contest :- Codeforces Deltix round 742 Div(1+2)
Approach :- You just need to analyse that there are 3 cases :- 
            Case 1:- Difference is odd --> not possible 
            Case 2:- Even difference and a = b 
                 ---> Case 2.1 a = 0  then answer is 0 as we don't need to perform any operation
                 ---> Case 2.2 a != 0 then answer is 1
            Case 3: else we need 2 operations 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long c,d;
        cin>>c>>d;
        
        long long a=0,b=0;
        long long dif = abs(d-c);
        if(dif%2)cout<<"-1\n";
        else if(c==d){
            if(c)cout<<"1\n";
            else cout<<0<<"\n";
        }
        else cout<<2<<"\n";
    }
}
