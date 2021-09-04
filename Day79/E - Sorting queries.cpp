/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 217
Approach :- use queue to store the value in it and when we have to sore we use map to get all the elements of queue in the map with frequency and make queue empty , if queue is empty
           we use all the values in map and decremetn it coutn ( if count becomes 0 we remove it ) and make it empty else we print the first value of queue and remove that value.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    //long long l;
    int q;
    cin>>q;
    
    //set<long long>temp,z;
    map<long long,int>fre;
    queue<long long>P;
    int f=0,start=0,end=0,d=0;
    
    for(int i=0;i<q;++i){
         
        int c;
        cin>>c;
        
        if(c==1){
            long long x;
            cin>>x;
            P.push(x);
            
        }
        else if(c==2){
            if(fre.size()){
                cout<<(*fre.begin()).first<<"\n";
                (*fre.begin()).second--;
                if((*fre.begin()).second==0)fre.erase(fre.begin());
            }
            else{
                cout<<P.front()<<"\n";
                P.pop();
            }
        }
        else{
            while(!P.empty()){
                fre[P.front()]++;
                P.pop();
            }
        }
    }
}
