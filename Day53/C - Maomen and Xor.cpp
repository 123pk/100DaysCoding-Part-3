/*
Platform :- Codeforces 
Contest :- Codeforces Round 737 Div 2
Approach :- There are three cases :- 
           1. If k==0 then answer is always '1'
           2. If 'n' is odd , then we comupute nCr for all r from n-1 to 2 and intial value of ans=2 , then we sum all the value of nCr 
              then we do modulo expoentiation and our answer is ans^k we use modlo to compute the final value
           3. we add value calculated in 2nd case but in this case we have initial value is 1 ,
              If 'n' is even then we have number of differnt value 2^(n*(k-i)) * sum_of_nCr^(i-1) is added for each value of 'i' from 1 to k
*/
