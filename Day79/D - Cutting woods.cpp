/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 217
Approach :- store each cut in set and for each 'x' find the lowerbound of 'x' in set , if lowe_bound is the first element of set then answer is that first value else 
            find the difference of lowe_bound(x) and value just before the lower_bound(x) value.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long l;
    int q;
    cin>>l>>q;
    
    set<long long>temp;
    for(int i=0;i<q;++i){
        int c;
        long long x;
        cin>>c>>x;
        
        if(c==1){
            temp.insert(x);
        }
        else{
            if(temp.size()==0){
                cout<<l<<"\n";
                continue;
            }
            auto it = temp.lower_bound(x);
            if(it==temp.end()){
                it--;
                cout<<(l-*it)<<"\n";
            }
            else{
               if(it==temp.begin()){
                   cout<<(*it)<<"\n";
               } 
               else{
                   long long dif = *it;
                   it--;
                   dif-=(*it);
                   cout<<dif<<"\n";
               }
            }
        }
    }
}
