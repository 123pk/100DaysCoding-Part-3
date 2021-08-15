/*
Platform :- Codeforces
Contest :- Codeforces Round 738 Div 2
Approach :- i) If A[0] = 1 , then we have a valid rount n+1 --> 1 --> 2-->3...->n  
            ii) If we A[i] = 1 and A[i-1] = 0 , then also we have a path 1--> 2-->3...->(i) --> (n+1) --> (i+1)-->...->n
            So we check first condition if 1st condition is not met we check for 2nd condition which will meet anyways as A[0] = 0 ,if we have all '0' we will have path betwee
            n --> n+1  so we will print 1..n+1 in that case

*/
