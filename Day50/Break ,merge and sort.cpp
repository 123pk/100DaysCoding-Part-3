/*
Platform :- Codedrills
Contest :- ICPC prelims round Amritapuri
Approach :-  find cost of breaking k[i] array optimally by finding the point where ( A[i - 1] > A[i] ) and storing in array then find the "distance between adjacent points" , 
             let number of those points to be 'z' then add the smallest 'z-1' point sum to "cost".
             
             For merging use priority queue and add merge the top two elements . If there is just one element leave that.
*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
         int n;
         cin>>n;
         
         
        long long ans=0;
        priority_queue<int,vector<int>,greater<int>>P;
        int d=0;
        
        for(int i=0;i<n;++i){
            int k;
            cin>>k;
 
            int idx = 0;
            long long last =-1;
            vector<long long>cut;
            cut.push_back(0);
            for(int j=0;j<k;++j){
                long long  x;
                cin>>x;
                if(j){
                    if(x<last){
                        cut.push_back(j);
                    }
                     
                }
                 
                last = x;
            }
            cut.push_back(k);
             
            if(cut.size()>=3){
                vector<int>zz;
                for(int j=1;j<cut.size();++j){
                    zz.push_back(cut[j]-cut[j-1]);
                }
                
                sort(zz.begin(),zz.end());
                for(int j=0;j<zz.size()-1;j++){
                    ans+=zz[j];
                    P.push(zz[j]);
                }
                P.push(zz[zz.size()-1]);
            }
            else{
                P.push(k);
            }
        }
        
       //cost of rearrenging
       while(!P.empty()){
           int temp=P.top();
           P.pop();
           if(P.empty()){
               break;
               //ans+=temp;
           }
           else{
               int temp2=P.top();
               P.pop();
               ans+=(temp+temp2);
               temp+=temp2;
               P.push(temp);
           }
       }
       
        cout<<ans<<"\n";
    }
}
