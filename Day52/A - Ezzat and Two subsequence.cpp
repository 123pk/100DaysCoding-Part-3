/*
Platform :- Codeforces 
Contest :- Codeforce Round 737 Div 2
Approach :- calculate the sum of all element and sort the array then run a loop from [ i = n-1 to 1] and find two value average of left subarray to current index [0 , i-1]
            and right subarray [i,n-1] , calculate the sum of those subarrays and store the max value for all such 'i' in ans .
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n];
        long long tot=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            tot+=A[i];
        }
        
        sort(A,A+n);
       long double ans=INT_MIN;
        long long temp=0;
        for(int i=n-1;i>=1;--i){
            tot-=A[i];
            temp+=A[i];
           long double z=tot;
            
            long double d1=i;
            z/=(d1);
            long double d2=(n-(i));
            long double z2 = temp;
            z2/=(d2);
            
           long double fin = z+z2;
            ans=max(ans,fin);
        }
        
        cout<<to_string(ans)<<"\n";
    }
}
