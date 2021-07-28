/*
Platform :- Codechef
Contest :- Codechef Cook off july 2021
Approach :- We will find the min value of array and count total number of occurence in array , now we will run through array and will check if 'mn'*2>A[i] then we have
            to change all the elements else we have to change 'n-d' elements only
            here   d ---> frequency of minimum element    and mn ---> minimum element of array
            
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n];
        long long mn=1e18;
      
        for(int i=0;i<n;++i){
            cin>>A[i];
            mn=min(mn,A[i]);
        }
        sort(A,A+n);
        int f=0,d=0;
     //   cout<<mn<<"check\n";
        for(int i=0;i<n;++i){
            if(A[i]==mn)d++;
            else{
                if((mn*2)>=(A[i])){
                    f=1;break;
                }
            }
        }
        
        if(f==0)cout<<(n-d)<<"\n";
        else cout<<n<<"\n";
    }
}
