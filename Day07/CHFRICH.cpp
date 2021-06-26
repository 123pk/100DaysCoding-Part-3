/*
Platform :- Codechef
Problem :- CHFRICH
Contest :- Codechef June Lunctime 2021
Problem :- CHFRICH
Approach :- ceil ([Final amount - Intitial amount ]/ x)
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    long long a,b,x;
	    cin>>a>>b>>x;
	    
	    long long temp=b-a;
	    long long ans=temp/x;
	    
	    if(temp%x)ans+=1;
	    cout<<ans<<endl;
	}
	return 0;
}
