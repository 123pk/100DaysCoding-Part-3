/*
Platform :- Atcoder
Problem :- B - factorial yen coin
Approach :- store all the value from 1! to 10! and for a given value find the maximum value less than equal to 'x' that can be acheived and substract it from 'x' and 
            accordingly update the count
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    long long x;
    cin>>x;
    
    long long val=1;
    vector<long long>P;
    for(int i=1;i<=10;++i){
        val*=i;
        P.push_back(val);
    }
    
    int count=0;
 
        for(int i=9;i>=0;--i){
            if(P[i]<=x){
                int temp=(x/P[i]);
                long long zz=temp*P[i];
                x-=zz;
                count+=temp;
            }
        }
        cout<<count<<"\n";
 
}
