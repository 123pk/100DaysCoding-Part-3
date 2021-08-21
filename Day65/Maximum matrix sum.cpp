/*
Platform :- Leetcode
Contest :- Leetcode Bi-Weekly contest 59
Approach :- Modified djikstra , whenever we have a optimal distance till node 'i' from 'x' then no of ways of reach out to 'i' is equal to 'x' if we get the optimal answer again
            then we add number of ways to reach 'i' with no of ways to reach x %mod;
*/
