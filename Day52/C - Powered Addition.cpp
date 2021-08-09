/*
Platform :- Codeforces
Contest :- Codeforces Round 633 Div 2
Approach :- We maintain a variable "mx" which store the max value and if ( mx > A[i] ) then we store the max differnce possible and minimum power of 2 we need to 
            which is >= max_difference , we update our answer with ( max(ans, max_power_of_2 + 1 )) it. 
*/
