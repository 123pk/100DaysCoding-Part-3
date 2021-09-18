/*
Platform :- Codeforces
Contest :- Codeforces Round 643 Div 2
Approach :- For each value from 1 to 2n find the smallest index which contains A[i]+1 or higher . We can do so by maintaining an array of size 2n and an last pointer which points
            the last value, if our current value is greater than or equal to last value then we update our index from ( last to B[i] ) . Now for each value from 1 to n we find 
            ans = min(ans , value[A[i]+1] + i)
*/
