/*
Platform :- Codechef
Contest :- Codechef August Lunctime 2021
Approach :- we store all the indexes where max value occured and we will traverse through it and if ( idx >= k (1-based indexing)) then we can have (n+1 - i) contiguous 
            subsequences whose kth elemnt is max of array, we add that to our count
*/
