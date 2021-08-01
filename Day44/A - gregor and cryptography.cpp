/*
Platform :- Codeforces 
Contest :- Codeforces Round 735 Div 2
Approach :- find any root of n-1 and print that root and n-1
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        
        n-=1;
        long long min;
        for(long long i=2;i*i<=n;++i){
            if(n%i==0){
                min=i;
                break;
            }
        }
        
        cout<<min<<" "<<n<<"\n";
    }
}
