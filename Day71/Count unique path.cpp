/*
Platform :- Codedrill
Approach :- the number of ways to reach any cell in first row or first column is '1' , then for all other cell ( dp[i][j] = dp[i-1][j] + dp[i][j-1] ) total number of ways is
            dp[n-1][m-1]
*/
