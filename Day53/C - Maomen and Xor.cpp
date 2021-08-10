/*
Platform :- Codeforces 
Contest :- Codeforces Round 737 Div 2
Approach :- There are three cases :- 
           1. If k==0 then answer is always '1'
           2. If 'n' is odd , then we comupute nCr for all r from n-1 to 2 and intial value of ans=2 , then we sum all the value of nCr 
              then we do modulo expoentiation and our answer is ans^k we use modlo to compute the final value
           3. we add value calculated in 2nd case but in this case we have initial value is 1 ,
              If 'n' is even then we have number of differnt value 2^(n*(k-i)) * sum_of_nCr^(i-1) is added for each value of 'i' from 1 to k
*/
#include<bits/stdc++.h>
using namespace std;


long long int fact[200005];
long long int mod=1000000007;

//storing the modulo till max_n
void precomp(){
    fact[0] = 1;
    for(long long int i=1;i<=200005;++i){
        fact[i] = (fact[i-1]*i)%mod;
    }
}

//modulo exponentiation
long long int modulo_expo(long long int a,long long int b){
    
    long long int inv=1; 
    while(b>0){
        if(b%2)
            inv=(inv*a)%mod;
        b/=2;
        a=(a*a)%mod;
    }
    return inv;
}
 

//NcR comutation
long long int permutation(long long int a,long long int b){
    
    long long int z = (fact[b]*fact[(a-b)])%mod;
    
    return (fact[a] *modulo_expo(z,mod-2))%mod;
}

int main(){
    
    //memoise the factorial
    precomp();
    
    int t;
    cin>>t;
    
    while(t--){
        long long int n,k;
        cin>>n>>k;
        
        if(k==0){
            cout<<1<<"\n";
        }
        else if(n%2){
            long long int ans =2;
            long long int d =n-1;
            for(long long int i=d;i>0;i-=2){
                ans = (ans + permutation(n,i))%mod;
            }
            ans=modulo_expo(ans,k);
            cout<<ans<<'\n';
        }
        else{
            long long int ans=0;
            long long int d =n-2;
            for(long long int i=d;i>=0;i-=2){
            //    cout<<n<<" "<<i<<" "<<permutation(n,i)<<endl;
                ans = (ans + permutation(n,i))%mod;
            }
            
            long long int temp=ans;
           // cout<<ans<<'\n';
            ans=modulo_expo(ans,k);
            for(long long int i=1;i<=k;++i){
                long long int z=n*(k-i);
                ans=(ans+(modulo_expo(temp,i-1)*modulo_expo(2,z))%mod)%mod;
            }
            cout<<ans<<"\n";
        }
    }
}
