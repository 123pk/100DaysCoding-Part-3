/*
Platform :- Codeforces 
Contest :- Codeforces Round 708 Div 2
Approach :- do prime factorisation of each value and maintain a vector which contains values in ascending order and if prime factor of that element has odd power push it in
            that vector and maintain its fequency if we again get any element which have same frequency array then we have to partition our array as those two values product is
            going to be a perfect square.
            
            --> A perfect square prime factors have 'even' power
            ---> for finding prime efficientyly use seive
*/
#include <bits/stdc++.h>
 
using namespace std;

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t;
    cin>>t;
    while(t--){
        
        int n,k;
        cin>>n>>k;
        
        int A[n];
        int zz=0;
         for(int i=0;i<n;++i){
             cin>>A[i];
             if(A[i]==A[0])zz++;
         }
        
       if(zz==n){
            cout<<n<<"\n";
            continue;
        }
        int c=0,x=0;
        map<vector<int>,int>P,Q2;
        map<int,int>Q,R;
        for(int i=0;i<n;++i){
          
            if(isPrime(A[i])){
                if(P[{A[i]}]){
                    c++;
                    x=0;
                    P=Q2;
                    P[{A[i]}]++;
                }
                else{
                    P[{A[i]}]++;
                }
            }
            else{
                 vector<int>fre;
                int d=0;
                 
                while(A[i]%2==0){
                    A[i]/=2;
                    d++;
                }
                if(d%2)fre.push_back(2);
                
                d=0;
                for(int j=3;j<=A[i];j+=2){
                    d=0;
                    while(A[i]%j==0){
                        A[i]/=j;
                        d++;
                    }
                    if(d%2)fre.push_back(j);
                }
                
                if(fre.size()==0){
                    if(x){
                         c++;
                         P=Q2;
                    }
                    else{
                        x++;
                    }
                    
                    continue;
                }
                
                if(P[fre]){
                    c++;
                    x=0;
                    P=Q2;
                    P[fre]=1;
                }
                else{
                    P[fre]++;
                }
                
            }
        }
        c++;
        cout<<c<<"\n";
    }
}
