/*
Platform :- Codeforces
Contest :- Codeforces Educational Round 112
Approach :- we want to choose [  min( max ( ( A[0][i+1]+A[0][i+2]...A[0][n-1]) , ( A[1][0]+A[1][1]+..A[1][i-1]) ) ] for i>=1 and i<=n , 
           we can solve this using prefix and suffix sum in O(1) and for all valid 'i' values we will check 
*/
