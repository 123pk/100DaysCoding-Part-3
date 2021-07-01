/*
Platform :- Codeforces 
Contest :- Codeforces Round 726 Div 2
Problem :- D - Deleting divisors
*/
#include "bits/stdc++.h"
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--){
        
        int n;
        cin >> n;
        if(n % 2 == 1){
            cout << "Bob\n";
            continue;
        }
        int cnt = 0;
        while(n % 2 == 0){
            cnt++;
            n /= 2;
        }
 
        if(n > 1){
            cout << "Alice\n";
        }else if(cnt % 2 == 0){
            cout << "Alice\n";
        }else cout << "Bob\n";
    }
}
