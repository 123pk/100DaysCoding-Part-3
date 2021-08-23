/*
Platform :- Codechef
Contest :- Codechef August Cookoff 2021
Approach :- we can see that making pair is efficient if and only if sum of pair of (A[i] + A[j] > x) , we sort the array and start from greatest values and if the pair of two
            greatest values is greater than 'x' and 'k' is not zero we use add 'x' to our answer and decrement 'k--' else we add individual values in answer.
*/
