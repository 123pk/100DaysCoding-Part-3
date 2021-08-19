/*
Platform :- Codeforces
Contest :- Codeforces Round 739 Div 3
Approach :- As the max value of A=10^9 so max operation required to make it into power of 2 is 10( remove all the digits in worst case and add '1') , we can find all the numbers
            which  are power of 2 till 10^18 in (log N time ---> 60 itterations) then we will find for each value the minimum digits need to be changed so and print the minimum 
            value.
*/
#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        string temp =to_string(n);
        int c=temp.size();
       // cout<<c<<" checking \n";
     
        int ans = INT_MAX;
        for(long long i=0;i<=60;++i){
            long long z = pow(2,i);
            string zz = to_string(z);
            int d=0,k=0;
            for(int  j=0;j<c && k<zz.size();++j){
                if(temp[j]==zz[k]){
                    k++;
                }
            }
            int tot = c-k;
          //  cout<<tot<<" check "<<temp<<" "<<zz<<" "<<c<<" "<<k<<endl;
            tot+=(zz.size()-k);
            ans=min(ans,tot);
        }
        cout<<ans<<"\n";
    }
}
