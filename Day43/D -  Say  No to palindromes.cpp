/*
Platform :- Codeforces
Contest :- Educational Round 112
Approach :- just '3' characters 'a', 'b' and 'c' are in string so we can find all the permutaionf of "abc" and we can analyse that for string to not contain 
           any palindrome of size >=2 it should follow following pattern of any permutaion "abcabcabc..." ,
           there are six such permutation we will find the minimum number of changes need for each permutaiton for each index and we can find minimum 
           value of ( change[r]-change[l-1] ) for all the six permutation
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	 
		int n,q;
		cin>>n>>q;
		
		string s;
		cin>>s;
		
		vector<string>P={"abc","acb","bca","bac","cab","cba"};
		vector<vector<int>>Q;
		for(int i=0;i<P.size();++i){
		    int c=0;
		    vector<int>temp(n);
		    for(int j=0;j<n;++j){
		        if(s[j]!=P[i][j%3])c++;
		        temp[j]=c;
		    }
		    Q.push_back(temp);
		}
		
		for(int i=0;i<q;++i){
		    int l,r;
		    cin>>l>>r;
		    
		    l--;
		    r--;
		    int ans=INT_MAX;
		    if(l==0){
		        
		        for(int j=0;j<Q.size();++j){
		            int temp=Q[j][r];
		            ans=min(ans,temp);
		        }
		         
		    }
		    else{
		        for(int j=0;j<Q.size();++j){
		            int temp=Q[j][r]-Q[j][l-1];
		            ans=min(ans,temp);
		        }
		    }
		    
		    cout<<ans<<"\n";
		}
	 
}
