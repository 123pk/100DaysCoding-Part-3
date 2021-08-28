/*
Platform :- Codechef
Contest :- Codechef August Lunctime 2021
Approach :- Analyse the problem you will find we need to find longest increasing subsequence including the last element, moving from end to front . We maintain a variable which stores
            the max element till now and we traverse from behind to front and if we find any element greater than current max then we increment our answer as it is the the place from
            where we can reach the last element , if we are at first element we will check if ( current_max > A[i]) then we can never reach out last element else we can reach and increment 
            your answer by 1
*/
