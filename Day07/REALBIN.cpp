/*
Platform :- Codechef
Contest :- June Lunchtime
Problem :- From Rational to Binary (REALBIN)
Approach :- we can only do when the denominator is power of 2
Alert :- To avoid TLE use '\n' instead of 'endl' in c++
*/
#include<iostream>
#include<bitset>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        long long a,b;
        cin>>a>>b;
        
        int f=0;
        int d=0;
        string temp=bitset<64>(b).to_string();
        for(int i=0;i<64;++i){
            if(temp[i]=='1')d++;
            if(d==2){
                f=1;break;
            }
        }
        if(f)cout<<"No"<<"\n";
        else cout<<"Yes"<<"\n";
    }
}
