/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 212
Approach :- we will use min heap/priority queue of pair ordered by first elment , where our first elment will be our intital value and second element will be value 
            that have been added before that element , every time we are asked to print the value we will choose element with smaller ( fist-second)value .
*/
#include<bits/stdc++.h>
using namespace std;

struct comp {
    constexpr bool operator()(
        pair<long  long, long long> const& a,
        pair<long long, long long> const& b)
        const noexcept
    {  
        return a.first-a.second > b.first-b.second;
    }
};

int main(){
    int q;
    cin>>q;
    
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,comp>P;
    long long temp=0;
    for(int i=1;i<=q;++i){
        int x;
        cin>>x;
        
        if(x==1){
            long long y;
            cin>>y;
            
            P.push({y,temp});
        }
        else if(x==2){
            long long y;
            cin>>y;
            temp+=y;
        }
        else{
            pair<long long,long long> tp = P.top();
            P.pop();
            tp.first+=temp;
            tp.first-=tp.second;
            cout<<tp.first<<"\n";
        }
    }
    
}
