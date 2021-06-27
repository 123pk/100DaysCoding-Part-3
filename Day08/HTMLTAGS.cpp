/*
Platform :- Codechef
Contest :- Codechef June Lunchtime
Problem :- HTMLTAGS
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	
	while(t--){
	    string s;
	    cin>>s;
	    
	    if(s[0]!='<' || s[1]!='/' ||s[s.size()-1]!='>'){
	        cout<<"Error"<<"\n";
	    }
	    else{
	        int f=0;
	        for(int i=2;i<s.size()-1;i++){
	            if('a'<=s[i] && s[i]<='z'  || '0'<=s[i] && s[i]<='9'){
	                continue;
	            }
	            else f=1;
	        }
	        
	        if(f||s.size()==3)cout<<"Error"<<"\n";
	        else cout<<"Success"<<"\n";
	    }
	}
	return 0;
}
