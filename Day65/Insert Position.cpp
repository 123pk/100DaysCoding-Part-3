/*
Platform :- Codedrills
Contest :- Interview Practise 16
Approach :- as all elements are distinct we will do binary search and if element is present we return the index where it is present else we return the index of just greater value 
            if target is greater than all the values we return the size of array ,remember( 0 -based indexing)
*/
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
class InsertPosition {
public:
 
int getPosition(std::vector<int> A, int target) {
	//motivation is to find the index of same of just greater value 
	//than target value
	int ans=0;
	if(A.size() == 0 )return 0;
	int s = 0,e = A.size()-1,m = (s+e)/2;
	if(target>A[e])return e+1;
	while(s<=e){
		if(A[m] == target){
			ans = m;
			break;
		}
		else{
		   if(A[m]>target){
			   if(s == e ){
			      ans = s;
				   break;
			   }
			   e = m;
			   m = (s+e)/2;
		   }
			else{
			   s = m+1;
			   m = (s+e)/2;
			}
		}
	}
	return ans;
}
 
 
};
