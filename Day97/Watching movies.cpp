/*
Platform :- Geeksforgeeks
Contest :- Job-A-thon Hiring problem
Approach:- We need to find the max value in range from (i+1 to min(n-1,i+k)) which can be done by using segment tree and find the max in that range and compare with the value at
          ith position , if this value > max_in_range (i+1 ,min(n-1,i+k)) then we increment our answer.
*/
