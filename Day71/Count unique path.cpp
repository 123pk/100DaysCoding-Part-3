/*
Platform :- Codedrill
Approach :- the number of ways to reach any cell in first row or first column is '1' , then for all other cell ( dp[i][j] = dp[i-1][j] + dp[i][j-1] ) total number of ways is
            dp[n-1][m-1]
*/
#include<bits/stdc++.h>
using namespace std;

class CountUniquePaths {
public:
	int getCount(int n, int m) {
		// Code here
		vector<vector<int>>dp(n,vector<int>(m,1));
   for(int i=1;i<n;++i){
       for(int j=1;j<m;++j){
           dp[i][j] = dp[i-1][j]+dp[i][j-1];
       }
   }
   return dp[n-1][m-1];
	}
};
