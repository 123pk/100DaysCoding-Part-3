/*
Platform :- Codedrills
Contest :- ICPC prelims round Amritapuri
Approach :-  find cost of breaking k[i] array optimally by finding the point where ( A[i - 1] > A[i] ) and storing in array then find the "distance between adjacent points" , 
             let number of those points to be 'z' then add the smallest 'z-1' point sum to "cost".
             
             For merging use priority queue and add merge the top two elements . If there is just one element leave that.
*/
